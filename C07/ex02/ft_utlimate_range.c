#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int counter;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	counter = 0;
	while (counter <= size)
	{
		(*range)[counter] = min;
		min++;
		counter++;
	}
	return (size);    
}
/* 
int main(void)
{
	int *range;

	printf("%d\n", ft_ultimate_range(&range, 1, 6));
} */