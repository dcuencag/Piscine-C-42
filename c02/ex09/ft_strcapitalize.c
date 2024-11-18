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

char	ft_up(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
		{
			str[pos] = str[pos] - 32;
		}
		pos++;
	}
	return (str);
}

char	ft_down(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
		{
			str[pos] = str[pos] + 32;
		}
		pos++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{	//me quedé aquí viendo que condiciones meter para poder diferenciar entre mins mans en el str
		if (str[pos] == ' ')
		{
			ft_up(str[pos + 1]);
		}
		pos++;
		str[0] = str[0] - 32;
	}
	return (str);
}

int	main(void)
{
	char str[] = "ola 12 quiREre té -no";

	ft_strcapitalize(str);
	printf("%s\n", str);
}
