#include <unistd.h>

int	iter(char *str, char c, int len)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0' && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	} 
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
			write(1, &argv[1][i], 1);
		i++;
	}
	return (0);
}