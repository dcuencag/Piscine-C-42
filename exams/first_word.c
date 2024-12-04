#include <unistd.h>

char	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int	main(int ac, char **av)
{
	int i;

	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	i = 0;
	while (is_space(av[1][i]))
	{
		i++;
	}
	
	while (!is_space(av[1][i]) && av[1][i])
	{
		write (1, &av[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}