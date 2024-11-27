/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:48:41 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/27 17:19:15 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;
	int	range;

	if (min >= max)
	{
		return (NULL);
	}
	range = max - min;
	dest = malloc(range * sizeof(int));
	i = 0;
	while (i < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
/* 
int	main(void)
{
	int *dest = (ft_range(1, 5));
	printf("%i\n", *dest);
} */