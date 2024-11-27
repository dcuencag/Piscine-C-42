#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	plus_one(char c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
	{
		c = c + 1;
	}
	if (c == 'z' || c == 'Z')
	{
		c = c - 25;
	}
	ft_putchar(c);
	return (0);
}

int	ft_put_string(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		plus_one(str[counter]);
		counter++;
	}
	ft_putchar('\n');
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_put_string(argv[1]);
	}
	else
	{
		ft_putchar('\n');
	}
    return (0);
}