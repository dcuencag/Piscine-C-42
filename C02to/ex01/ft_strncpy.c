/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:37:15 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/18 12:17:04 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	put_null(char *dest, unsigned int to_fill)
{
	unsigned int	c_filler;

	c_filler = 0;
	while (c_filler < to_fill)
	{
		dest[c_filler] = '\0';
		c_filler++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c_position;
	unsigned int	much_nulls;

	c_position = 0;
	while (src[c_position] != '\0' && c_position < n)
	{
		dest[c_position] = src[c_position];
		c_position++;
	}
	if (n > c_position)
	{
		much_nulls = n - c_position;
		put_null(dest + c_position, much_nulls);
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[20];
	char origin[] = "Cats on cats";
	unsigned int n = 20;

	ft_strncpy(dest, origin, n);
	printf("%s\n", dest);
}*/
