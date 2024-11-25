/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:10:21 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/25 11:37:55 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0)
	{
		counter++;
	}
	return (counter);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
