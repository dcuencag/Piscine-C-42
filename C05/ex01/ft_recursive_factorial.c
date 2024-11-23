/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 21:19:10 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/23 21:29:38 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/* 
int	main(int argc, char **argv)
{
	int	nb =  atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error, escirba solo un argumento a parte del ejecutable\n");
	}
	printf("Factorial is = %d\n", ft_recursive_factorial(nb));
	return (0);
} */