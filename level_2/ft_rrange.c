#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	i;
	int	len;

	i = 0;
	len = end - start + 1;

	if (start > end)
		return (ft_rrange(end, start));
	res = (int *)malloc(sizeof(int) * len);
	if (res)
	{
		while (i < len)
		{
			res[i] = end;
			end--;
			i++;
		}
	}
	return (res);
}	
