/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:54:13 by hburton           #+#    #+#             */
/*   Updated: 2023/02/19 21:00:42 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_checkmatch(int **box, int size)
{
	int		i;

	i = 1;
	while (i <= size)
	{
		if (ft_check_cols_up(box, i, size))
			return (1);
		if (ft_check_cols_down(box, i, size))
			return (1);
		if (ft_check_row_left(box, i, size))
			return (1);
		if (ft_check_row_right(box, i, size))
			return (1);
		i++;
	}
	return (0);
}

int	check(int **box, int i, int xy, int size)
{
	int	row;
	int	col;
	int	x;
	int	y;

	x = xy / 10;
	y = xy % 10;
	row = 1;
	col = 1;
	while (row <= size)
	{
		if (i == box[row][y])
			return (1);
		row++;
	}
	while (col <= size)
	{
		if (i == box[x][col])
			return (1);
		col++;
	}
	return (0);
}
