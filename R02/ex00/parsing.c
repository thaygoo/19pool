/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepicron <jepicron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:40:16 by jepicron          #+#    #+#             */
/*   Updated: 2023/02/26 18:09:18 by jepicron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static int	line_place(char *tmp)
{
	int	j;

	j = -2;
	if ((tmp[1] == ' ' || tmp[1] == ':') && (tmp[0] >= '0' && tmp[0] <= '9'))
		j = tmp[0] - 48;
	else if ((tmp[2] == ' ' || tmp[2] == ':')
		&& (tmp[1] >= '0' && tmp[1] <= '9') && tmp[0] == '1')
	{
		j = 10;
		j += tmp[1] - 48;
	}
	else if ((tmp[2] == ' ' || tmp[2] == ':')
		&& (tmp[0] >= '0' && tmp[0] <= '9') && tmp[1] == '0')
	{
		j = 20;
		j += tmp[0] - 2 - 48;
	}
	else if (tmp[0] == '1')
		j = ft_count_zeros(tmp);
	return (j);
}

static int	line_read(char **tmp, int fd, int *ind2)
{
	char	*str;
	int		ind;
	int		j;

	*tmp = NULL;
	str = malloc(sizeof(char) * 2);
	if (!str)
		return (-1);
	ind = read(fd, str, 1);
	*tmp = ft_strjoin(*tmp, str);
	while (str[0] != '\n' && ind != 0)
	{
		free(str);
		str = malloc(sizeof(char) * 2);
		if (!str)
			return (-1);
		ind = read(fd, str, 1);
		if (ind == -1)
			return (-1);
		*tmp = ft_strjoin(*tmp, str);
	}
	*ind2 = ind;
	free(str);
	j = line_place(*tmp);
	return (j);
}

char	**file_to_tab(int fd)
{
	char	*tmp;
	char	**result;
	int		i;
	int		j;
	int		ind;

	j = 1;
	i = 0;
	ind = 1;
	result = malloc(33 * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < 32 && ind)
	{
		j = line_read(&tmp, fd, &ind);
		if (j == -1)
			break ;
		else if (result[j] != NULL)
			return (NULL);
		else if (j != -2)
			result[j] = ft_ft_strjoin(result[j], tmp, &i);
	}
	result[32] = 0;
	return (result);
}

int	line_is_valid(char	*result)
{
	int	j;
	int	k;

	j = 0;
	while (result[j] >= '0' && result[j] <= '9')
		j++;
	while (result[j] == ' ')
		j++;
	if (result[j] != ':')
		return (0);
	j++;
	while (result[j] == ' ')
		j++;
	k = j;
	while (result[j] != 127 && result[j] >= 32)
		j++;
	if (result[j] != '\n' || k == j)
		return (0);
	return (1);
}

char	**check_file(int fd)
{
	char	**result;
	int		i;

	result = file_to_tab(fd);
	i = 0;
	if (result == NULL)
		return (NULL);
	while (result[i])
	{
		if (i != line_place(result[i]) || !line_is_valid(result[i]))
			return (NULL);
		i++;
	}
	if (i != 32)
		return (NULL);
	result = check_for_space(result);
	return (result);
}
