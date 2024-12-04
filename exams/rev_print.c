#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_rev_print(char *str)
{
	int	len;

	len = ft_strlen(str) - 1;
	while (len >= 0)
	{
		write (1, &str[len], 1);
		len--;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
	}
	else
	{
		ft_rev_print(av[1]);
		write (1, "\n", 1);
	}
}