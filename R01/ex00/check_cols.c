/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cols.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:55:29 by hburton           #+#    #+#             */
/*   Updated: 2023/02/19 20:58:42 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_check_cols_up(int **box, int x, int size)
{
	int		cpt;
	int		y;
	int		i;

	y = 1;
	cpt = 1;
	i = 1;
	while (y + i <= size)
	{
		if (box[x][y] < box[x][y + i])
		{
			cpt++;
			y += i;
			i = 1;
		}
		else
			i++;
	}
	if (cpt == box[x][0])
		return (0);
	else
		return (1);
}

int	ft_check_cols_down(int **box, int x, int size)
{
	int		cpt;
	int		y;
	int		i;

	y = size;
	cpt = 1;
	i = 1;
	while (y - i >= 1)
	{
		if (box[x][y] < box[x][y - i])
		{
			cpt++;
			y -= i;
			i = 1;
		}
		else
			i++;
	}
	if (cpt == box[x][size + 1])
		return (0);
	else
		return (1);
}
