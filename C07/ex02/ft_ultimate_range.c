/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:58:15 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/27 17:15:44 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(int *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;
	int	size;

	if (min >= max)
	{
		**range = '\0';
		return (**range);
	}
	**range = &max - &min;
	dest = malloc(**range * sizeof(int));
	i = min;
	while (i < max)
	{
		dest[i] = min + i;
		i++;
	}
	size = ft_strlen(dest);
	return (size);
}
/* 
int	main(void)
{
	int *dest = (t_ultimate_range(1, 5));
	printf("%i\n", *dest);
} */