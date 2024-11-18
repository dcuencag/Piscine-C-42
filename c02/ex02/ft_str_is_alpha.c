/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:18:49 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/18 15:52:13 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c_position;

	c_position = 0;
	while (str[c_position] != '\0')
	{
		if (!(str[c_position] >= 'A' && str[c_position] <= 'Z')
			&& !(str[c_position] >= 'a' && str[c_position] <= 'z'))
		{
			return (0);
		}
		c_position++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "A";
	
	ft_str_is_alpha(str);
	if (ft_str_is_alpha(str))
	{
		printf("Devuelve 1");
	}
	else
	{
		printf("Devuelve 0");
	}
}*/
