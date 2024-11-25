/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:22:31 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/25 16:15:09 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
//ordenarlo compparando punteros con bubble y pasar por todos los argumentos argc veces
void	ft_putstr(char *str)
{
	int	index;
	int size = ft_strlen(str);

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], size);
		write(1, '\n', 1);
		index++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i > 0)
	{
		ft_strcmp(argv[i], argv[i]);
	}
	return (0);
}
