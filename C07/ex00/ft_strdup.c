/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:59:26 by hburton           #+#    #+#             */
/*   Updated: 2023/02/28 12:34:52 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	result = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	return (src);
}

/** 

#include <stdio.h>

int	main(int argc, char const *argv[])
{
	char	str[12] = "HELLO MONDE";

	printf("ft_strdup : %s \n", ft_strdup(str));
	printf(" . strdup : %s \n", strdup(str));
	return (0);
}

**/