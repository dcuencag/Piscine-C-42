/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 10:39:16 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/24 12:49:48 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if ((i * i == nb))
		{
			return (i);
		}
		i++;
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
	printf("Square root is = %d\n", ft_sqrt(nb));
	return (0);
} */