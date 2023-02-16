#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
    int value = 10;
    ft_ft(&value);
    printf("%d", value);
    return(0);
}


