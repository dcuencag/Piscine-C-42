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

/*no necesito comparaar la longitud tneog que comparar en base ascii y es como si comparo 20 con 19,99999999*/
#include <unistd.h>

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

void	ft_sort_params(char *str1, char *str2)
{
	char temp;

}

int	main(int argc, char **argv)
{
	int	i;
	int	count;
	int next;

	i = 0;
	if (argc < 2)
	{
		printf("Error, to few arguments, please insert at least two appart for the executable");
		return (0);
	}	
	while (i < argc)//ordenarlo compparando punteros con bubble y pasar por todos los argumentos argc veces
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
