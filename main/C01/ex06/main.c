#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char	txt[15] = "Test de string";

	printf("%d", ft_strlen(&txt[0]));
	return 0;
}
