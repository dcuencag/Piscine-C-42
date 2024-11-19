/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:59:12 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/19 15:50:30 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	turn_mayus(char l)
{
	if (l >= 'a' && l <= 'z')
	{
		l = l - 32;
	}
	return (l);
}

char	turn_minus(char l)
{
	if (l >= 'A' && l <= 'Z')
	{
		l = l + 32;
	}
	return (l);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && is_alphanumeric(str[i]))
			|| (!is_alphanumeric(str[i - 1]) && is_alphanumeric(str[i])))
		{
			str[i] = turn_mayus(str[i]);
		}
		else
		{
			str[i] = turn_minus(str[i]);
		}
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char str[] = "HELLO *hel-lo 8HeLo";

	ft_strcapitalize(str);
	printf("%s\n", str);
} */