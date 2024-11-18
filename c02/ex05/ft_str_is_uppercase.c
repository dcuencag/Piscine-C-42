/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:46:14 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/18 16:50:10 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= 'A' && str[pos] <= 'Z'))
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
	char	str[] = "";

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
