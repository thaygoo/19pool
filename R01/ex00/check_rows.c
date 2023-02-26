/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rows.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:55:28 by hburton           #+#    #+#             */
/*   Updated: 2023/02/19 21:00:07 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_row_left(int **box, int y, int size)
{
	int		cpt;
	int		x;
	int		i;

	x = 1;
	cpt = 1;
	i = 1;
	while (x + i <= size)
	{
		if (box[x][y] < box[x + i][y])
		{
			cpt++;
			x += i;
			i = 1;
		}
		else
			i++;
	}
	if (cpt == box[0][y])
		return (0);
	else
		return (1);
}

int	ft_check_row_right(int **box, int y, int size)
{
	int		cpt;
	int		x;
	int		i;

	x = size;
	cpt = 1;
	i = 1;
	while (x - i >= 1)
	{
		if (box[x][y] < box[x - i][y])
		{
			cpt++;
			x -= i;
			i = 1;
		}
		else
			i++;
	}
	if (cpt == box[size + 1][y])
		return (0);
	else
		return (1);
}
