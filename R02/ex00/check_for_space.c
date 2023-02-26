/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:13:52 by hburton           #+#    #+#             */
/*   Updated: 2023/02/26 17:20:21 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_n_sp(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = ft_strlen(str);
	while (i < k)
	{
		if (str[i] == ' ' && str[i - 1] == ' ')
			j++;
		i++;
	}
	return (j);
}

char	*ft_rm_sp(char	*str)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tmp = malloc((ft_strlen(str) - ft_n_sp(str)) * sizeof(char));
	if (!tmp)
		return (NULL);
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp[i] = str[i];
		i++;
	}
	i = j;
	while (str[i])
	{
		while (str[i] == ' ' && str[i - 1] == ' ')
			i++;
		if (str[i] != '\0')
			tmp[j++] = str[i++];
	}
	return (tmp);
}

char	**check_for_space(char **dict)
{
	int		i;
	int		j;
	char	*tmp;
	char	**result;

	result = malloc(33 * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < 32)
	{
		result[i] = ft_rm_sp(dict[i]);
		i++;
	}
	return (result);
}
