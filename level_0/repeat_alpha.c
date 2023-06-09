#include <unistd.h>

void	print_char_nb(char c, int nb)
{
	int	i;

	i = 0;
	while (i <= nb)
	{
		write(1, &c, 1);
		i++;
	}
}

void	repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			print_char_nb(str[i], str[i] - 97);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			print_char_nb(str[i], str[i] - 65);
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	repeat_alpha(argv[1]);
	return (0);
}
