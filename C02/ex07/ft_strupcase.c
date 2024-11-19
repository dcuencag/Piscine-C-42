/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:37:24 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/18 17:51:48 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
		{
			str[pos] = str[pos] - 32;
		}
		pos++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "abecedJAJAo";

	ft_strupcase(str);
	printf("%s", str);
}*/
