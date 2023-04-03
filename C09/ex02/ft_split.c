/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:20:57 by hburton           #+#    #+#             */
/*   Updated: 2023/03/02 16:25:18 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_charset(char *str, char *charset)
{
	int	i;

	i = 0;
	while (i < ft_strlen(charset))
	{
		if (str == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	// char	table[2];
	int	i;

	i = 0;
	while (!ft_is_charset(str[i], charset))
	{		
		printf("\n%c ", str[i]);
		i++;
	}
	printf("\n%s, %s", str, charset);

	return (0);
}

int	main(void)
{
	char	str[80] = "Lorem Ipsum, Hello le monde, La chaine qui sera transmise n'est pas modifiable.";
	char	set[4] = ", /";

	ft_split(str, set);
	return 0;
}
