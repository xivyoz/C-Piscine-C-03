#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			return (x);
		}
		i++;
	}
	return (x);
}
