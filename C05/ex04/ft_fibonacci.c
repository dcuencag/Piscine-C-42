/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:16:59 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/24 10:38:16 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index > 1)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
	}
	return (0);
}
/* 
int	main(int argc, char **argv)
{
	int	nb =  atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error, escirba solo un argumento a parte del ejecutable\n");
	}
	printf("Fibonacci is = %d\n", ft_fibonacci(nb));
	return (0);
} */