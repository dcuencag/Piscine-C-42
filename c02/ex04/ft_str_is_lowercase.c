/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:32:44 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/18 16:43:56 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= 'a' && str[pos] <= 'z'))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str[] = "a-0Rsd";

	ft_str_is_lowercase(str);
	if (ft_str_is_lowercase(str))
	{
		printf("Devuelve 1");
	}
	else
	{
		printf("Devuelve 0");
	}
}*/
