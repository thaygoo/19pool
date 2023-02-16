#include <stdio.h>

// void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(tab, 9);
	int i = 0;

	while (i != 9)
	{
	 	printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}
