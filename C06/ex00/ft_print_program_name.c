/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:30:42 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/24 16:04:30 by dancuenc         ###   ########.fr       */
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
	while (argc >= 1)
	{
		write (1, argv[0], ft_strlen(argv[0]));
		write (1, "\n", 1);
		return (0);
	}
}
