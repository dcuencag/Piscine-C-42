/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dancuenc <dancuenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:22:31 by dancuenc          #+#    #+#             */
/*   Updated: 2024/11/26 18:00:54 by dancuenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	ft_putstr(char *str)
{
	int	index;
	int size = ft_strlen(str);

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], size);
		write(1, "\n", 1);
		index++;
	}
	return ;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] <= s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char *str1, char *str2)
{
	char temp;
	if (ft_strcmp(str1, str2) < ft_strcmp(str2, str1))
	{
		temp = *str1;
		*str1 = *str2;
		*str2 = temp;
	}

}

int	main(int argc, char **argv)
{
	int	i;
	int	count;
	int next;

	i = 1;
	if (argc < 2)
	{
		printf("Error, to few arguments");
		return (0);
	}	
	while (i < argc)
	{
		count = 0;
		while (count < argc - 1)
		{
			next = count + 1;
			if (argv[count] > argv[next])
			{
				ft_sort_params(argv[i], argv[i + 1]);
			}
			count++;
		}
		i++;
	}
	i = 1;
	while (i <= argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}