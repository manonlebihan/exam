#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	while (src[i] != '\0')
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] == '\0';
	return (res);
}