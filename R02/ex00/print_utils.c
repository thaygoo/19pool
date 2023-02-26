/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepicron <jepicron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:37:18 by jepicron          #+#    #+#             */
/*   Updated: 2023/02/26 18:06:05 by jepicron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	print_digit(char c, char **dict, int *m, int *j)
{
	int	i;

	i = 1;
	if (*j)
		write(1, " ", 1);
	while (dict[c - 48][i] == ' ')
		i++;
	i++;
	while (dict[c - 48][i] == ' ')
		i++;
	while (dict[c - 48][i] != '\n')
	{
		write(1, &dict[c - 48][i], 1);
		i++;
	}
	*j = 1;
	*m = 1;
}

void	print_tenth2(char c, char **dict, int *m, int *k)
{
	int	j;
	int	i;

	i = 2;
	j = 10;
	j += c - 48;
	if (*k)
		write(1, " ", 1);
	while (dict[j][i] == ' ')
		i++;
	i++;
	while (dict[j][i] == ' ')
		i++;
	while (dict[j][i] != '\n')
	{
		write(1, &dict[j][i], 1);
		i++;
	}
	*k = 1;
	*m = 1;
}

void	print_tenth(char c, char **dict, int *m, int *k)
{
	int	j;
	int	i;

	i = 2;
	j = 20;
	j += c - 2 - 48;
	if (*k)
		write(1, " ", 1);
	while (dict[j][i] == ' ')
		i++;
	i++;
	while (dict[j][i] == ' ')
		i++;
	while (dict[j][i] != '\n')
	{
		write(1, &dict[j][i], 1);
		i++;
	}
	*k = 1;
	*m = 1;
}

void	print_hundreds(char c, char **dict, int *m, int *j)
{
	int	i;

	print_digit(c, dict, m, j);
	if (*j)
		write(1, " ", 1);
	i = 3;
	while (dict[28][i] == ' ')
		i++;
	i++;
	while (dict[28][i] == ' ')
		i++;
	while (dict[28][i] != '\n')
	{
		write(1, &dict[28][i], 1);
		i++;
	}
	*j = 1;
	*m = 1;
}

void	print_separator(int n, char **dict, int *k)
{
	int	i;
	int	j;

	j = 29;
	i = 4;
	if (*k)
		write(1, " ", 1);
	if (n == 3)
	{
		j = 30;
		i = 7;
	}
	if (n == 4)
	{
		j = 31;
		i = 10;
	}
	while (dict[j][i] == ' ')
		i++;
	i++;
	while (dict[j][i] == ' ')
		i++;
	while (dict[j][i] != '\n')
		write(1, &dict[j][i++], 1);
	*k = 1;
}
