/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:48:41 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/27 15:58:44 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	i = min;
	while (i < max)
	{
		dest[i] = i;
	}
	return (&dest);
}

int	main(void)
{
	char dest = (ft_range(1, 5));
	printf("%c\n", dest);
}