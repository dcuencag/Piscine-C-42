/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 09:25:34 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/24 10:09:25 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	i = 1;
	result = 1;
	while (i <= power)
	{
		result = nb * result;
		i++;
	}
	return (result);
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
	printf("Power is = %d\n", ft_iterative_power(nb, power));
	return (0);
} */