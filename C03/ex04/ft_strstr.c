/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:00:06 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/21 11:23:06 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] != '\0' && str[i + n] == to_find[n])
		{
			n++;
			if (to_find[n] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/* 
int main(void)
{
	printf("ft_strstr= %s\n", ft_strstr("HELLO", "LL"));
	printf("strstr= %s", strstr("HELLO", "LL"));
} */