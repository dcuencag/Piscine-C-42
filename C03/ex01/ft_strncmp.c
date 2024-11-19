#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		return(s1[i] - s2[i]);
		i++;
	}
	return(s1[i] - s2[i]);
}
/* 
int	main(void)
{
	char	s1[] = "abcdd";
	char	s2[] = "abcde";

	int result = ft_strncmp(s1, s2, 3);
	printf("Result = %d", result);
} */