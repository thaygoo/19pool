/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepicron <jepicron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:49:15 by jepicron          #+#    #+#             */
/*   Updated: 2023/02/26 17:51:01 by jepicron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_add_zeros(char **str, int i)
{
	char	*tmp;
	int		j;
	int		mod;

	mod = i % 3;
	tmp = malloc((i + mod + 1) * sizeof(char));
	if (!tmp)
		return (0);
	j = 0;
	if (mod >= 1)
		tmp[j++] = '0';
	if (mod == 1)
		tmp[j++] = '0';
	mod = 0;
	while (mod < i)
	{
		tmp[j] = str[0][mod];
		j++;
		mod++;
	}
	tmp[j] = '\0';
	*str = tmp;
	return (1);
}

int	number_of_trio(char **str)
{
	int	i;

	i = ft_strlen(*str);
	if (!ft_add_zeros(str, i))
		return (-1);
	i = ft_strlen(*str);
	return ((i / 3));
}

char	**sepnum(char	**str)
{
	char	**result;
	int		i;
	int		j;
	int		k;
	int		l;

	i = -1;
	j = 0;
	l = number_of_trio(str);
	result = malloc((l + 1) * sizeof(char *));
	if (!result || l == -1)
		return (NULL);
	while (++i < l)
	{
		k = 0;
		result[i] = malloc(4 * sizeof(char));
		if (!result[i])
		{
			free_tab(result);
			return (NULL);
		}
		while (k < 3)
			result[i][k++] = str[0][j++];
	}
	return (result);
}
