#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(int argc, char const *argv[])
{
	int	v1 = 2;
	int	v2 = 4;
	
	printf("v1 : %d, v2 : %d\n", v1, v2);
	ft_swap(&v1, &v2);
	printf("v1 : %d, v2 : %d", v1, v2);
	return 0;
}
