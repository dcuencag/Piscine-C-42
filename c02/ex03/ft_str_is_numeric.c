/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:54:30 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/18 16:30:52 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (!(str[position] >= '0' && str[position] <= '9'))
		{
			return (0);
		}
		position++;
	}
	return (1);
}
/*
int	main (void)
{
	char str[] = "09-1";

	ft_str_is_numeric(str);
	if(ft_str_is_numeric(str))
	{
		printf("Devuelve 1");
	}
	else
	{
		printf("Devuelve 0");
	}
}*/
