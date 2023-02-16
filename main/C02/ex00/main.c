#include <stdio.h>

// char *ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char v1[8] = "Salut !";
	char v2[8] = "       ";

	
	printf("%s",ft_strcpy(&v2[8], &v1[8]));
	return 0;
}
