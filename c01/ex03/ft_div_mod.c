/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:04:31 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/14 13:27:11 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int*mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	number;
	int	divider;

	number = 6;
	divider = 4;
	ft_div_mod(number, divider, &number, &divider);
	printf("Division: %d\n", number);
	printf("Module: %d\n", divider);
}*/
