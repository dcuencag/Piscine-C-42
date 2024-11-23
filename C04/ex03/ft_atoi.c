/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:15:51 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/23 15:14:10 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == '\f') || (str[i] == '\n') || (str[i] == ' ')
		|| (str[i] == '\r') || (str[i] == '\t') || (str[i] == '\v'))
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/* 
int main(int argc, char **argv)
{
	int	i = 1;
	while (i < argc)
	{
	printf("%d\n", ft_atoi(argv[1]));
	i++;
	}
	return (0);
} */