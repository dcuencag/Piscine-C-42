/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:44:08 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/12 15:39:45 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 48;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putnum((num1 / 10) + '0');
			ft_putnum((num1 % 10) + '0');
			ft_putnum(' ');
			ft_putnum((num2 / 10) + '0');
			ft_putnum((num2 % 10) + '0');
			if (num1 != 98 || num2 != 99)
			{
				ft_putnum(',');
				ft_putnum(' ');
			}
			num2++;
		}
		num1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
