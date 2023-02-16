#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	c = 20;
	int	d = 2;

	ft_ultimate_div_mod(&c, &d);
	printf("%d, %d", c, d);
	return (0);
}
