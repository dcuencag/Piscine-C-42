/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:49:15 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/16 12:31:11 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *min, int *max)
{
	int	changer;

	changer = *min;
	*min = *max;
	*max = changer;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	contracounter;

	counter = 0;
	while (counter < (size / 2))
	{
		contracounter = (size - 1) - counter;
		ft_swap(&tab[counter], &tab[contracounter]);
		counter++;
	}
}
/*
int	main(void)
{
	int	str[] = {1, 2, 3, 4, 5};
	int	size;

	size = 5;
	ft_rev_int_tab(str, size);
	printf("%d", str[0]);
	printf("%d", str[1]);
	printf("%d", str[2]);
	printf("%d", str[3]);
	printf("%d", str[4]);
}*/
