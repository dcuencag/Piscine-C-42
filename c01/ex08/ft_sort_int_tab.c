/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:32:13 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/16 19:51:15 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	n3;

	n3 = *a;
	*a = *b;
	*b = n3;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	counter;
	int	contracounter;

	index = 0;
	while (index < size)
	{
		counter = 0;
		while (counter < size -1)
		{
			contracounter = counter + 1;
			if (tab[counter] > tab[contracounter])
			{
				ft_swap(&tab[counter], &tab[contracounter]);
			}
			counter++;
		}
		index++;
	}
}
/*
int	main(void)
{
	int	str[] = {9, 2, 4, 52, -12,  0, 7};
	
	ft_sort_int_tab(str, 7);
	printf("%d ", str[0]);
	printf("%d ", str[1]);
	printf("%d ", str[2]);
	printf("%d ", str[3]);
	printf("%d ", str[4]);
	printf("%d ", str[5]);
	printf("%d\n", str[6]);
}*/
