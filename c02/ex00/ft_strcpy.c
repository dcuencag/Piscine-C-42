/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:28:03 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/17 13:36:15 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	if (dest == NULL)
	{
		return (NULL);
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int	main(void)
{
	char	str1[] = "potatoes riding unicorns";
	char	dest[] = "opatotse iridgn nucirons";

	printf("  Before:\n%s\n\n", dest);
	ft_strcpy(dest, str1);
	printf("  After:\n%s\n\n", dest);
}
