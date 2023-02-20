/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:23:13 by hburton           #+#    #+#             */
/*   Updated: 2023/02/20 15:46:33 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j])
				j++;
			if (to_find[j] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/** #include <string.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	char	s1[] = "Salut mon pote";
	char	s2[] = "mon";

	printf("string1 :  %s, \nstring2 : %s \n", s1, s2);
	printf("ft_strstr :%s \n", ft_strstr(s1, s2));
	printf("strstr :%s ", strstr(s1, s2));
	return (0);
}
 **/