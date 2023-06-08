int	max(int *tab, unsigned int len)
{
	int	i;
	int	res;

	if (len == 0)
		return (0);
	i = 0;
	res = tab[i];
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}