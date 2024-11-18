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
	int	pos;
	int	new_word;

	pos = 0;
	new_word = 1;
	while (str[pos] != '\0')
	{
		if ((str[pos] >= 'a' && str[pos] <= 'z')
	|| (str[pos] >= 'A' && str[pos] <= 'Z'))
		{
			if (new_word && str[pos] >= 'a' && str[pos] <= 'z')
			{
				str[pos] = str[pos] - 32;
			}
			else if (!new_word && str[pos] >= 'A' && str[pos] <= 'Z')
			{
				str[pos] = str[pos] + 32;
			}
			new_word = 0;
		}
		else if (str[pos] >= '0' && str[pos] <= '9')
		{
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		pos++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "qUE nO me ,DIGAS qUe éSto es fácil";

	ft_strcapitalize(str);
	printf("%s\n", str);
}
