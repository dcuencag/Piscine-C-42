/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:03:03 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/24 10:10:06 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/* 
int	main(int argc, char **argv)
{
	int	nb =  atoi(argv[1]);
	int power = atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error, escirba solo dos argumento a parte del ejecutable\n");
	}
	printf("Power is = %d\n", ft_recursive_power(nb, power));
	return (0);
} */