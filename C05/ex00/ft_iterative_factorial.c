/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:48:05 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/23 21:18:10 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/* 
int	main(int argc, char **argv)
{
	int	nb =  atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error, escirba solo un argumento a parte del ejecutable\n");
	}
	printf("Factorial is = %d\n", ft_iterative_factorial(nb));
	return (0);
} */