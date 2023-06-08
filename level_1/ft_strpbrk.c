#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[j] != '\0')
	{
		i = 0;
		while (s2[i] != '\0')
		{
			if (s1[j] == s2[i])
				return ((char *) s1);
			i++;
		}
		j++;
	}
	return (0);
}
