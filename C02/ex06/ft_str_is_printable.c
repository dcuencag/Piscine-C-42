/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:51:58 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/18 17:56:58 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= 32 && str[pos] < 126))
		{
			return (0);
		}
		else
		{
			pos++;
		}
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "abcd\a";

	ft_str_is_printable(str);
	if (ft_str_is_printable(str))
	{
		printf("Devuelve 1");
	}
	else
	{
		printf("Devuelve 0");
	}
}*/
