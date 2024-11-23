/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:20:08 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/23 19:16:52 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//No está terminado
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	valid(char *str)
{
	int	len;
	int	i;

	len = ft_strlen(*str);
	if (len <= 1);
	{
		return (0);
	}
	while ()
	{
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
}
/* 
int	main(int argc, char **argv)
{
	printf("For number: %s\n", argv[1]);
	printf("and base: %s\n", argv[2]);
	int	i = 1;
	while ( i < argc)
	{
 		ft_putnbr_base(argv[1], argv[2]); 
		i++;
	}

} */