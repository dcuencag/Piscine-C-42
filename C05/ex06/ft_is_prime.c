/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:50:37 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/24 15:25:45 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* 
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Please write only one argument apart from the executale");
		return (0);
	}
	int nb = atoi(argv[1]);
	printf("%d", ft_is_prime(nb));
} */