/* Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
	that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int. */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	do_op(int nb1, char c, int nb2)
{
	int	res;

	res = 0;
	if (c == '+')
		res = nb1 + nb2;
	else if (c == '-')
		res = nb1 - nb2;
	else if (c == '*')
		res = nb1 * nb2;
	else if (c == '/')
		res = nb1 / nb2;
	else if (c == '%')
		res = nb1 % nb2;
	printf("%d\n", res);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (1);
	}
	do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	return (0);
}
