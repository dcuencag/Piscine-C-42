/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:59:12 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/18 18:28:59 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new;

	i = 0;
	new = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = (new && str[i] >= 'a') ? str[i] - 32 :
				(!new && str[i] <= 'Z') ? str[i] + 32 : str[i];
			new = 0;
		}
		else
			new = !(str[i] >= '0' && str[i] <= '9');
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char str[] = "qUE nO me ,dIGAS ?qUe !éSto es fácil";
	
	printf("\nBefore: %s\n\n", str);
	ft_strcapitalize(str);
	printf("After:  %s\n\n", str);
	return (0);
} */
