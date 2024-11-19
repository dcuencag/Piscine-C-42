/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:30:06 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/17 17:46:36 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}
/*
int	main(void)
{
	int	number;
	int	divider;
	
	number = 10;
	divider = 5;

	ft_ultimate_div_mod(&number, &divider);
	printf("Divider: %d\n", number);
	printf("Module: %d\n", divider);
}*/
