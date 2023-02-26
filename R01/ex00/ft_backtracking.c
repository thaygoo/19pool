/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:00:19 by kdegryse          #+#    #+#             */
/*   Updated: 2023/02/19 20:54:05 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	ft_manage_end(int **box, int size, int xy, int i)
{
	int	x;
	int	y;

	x = xy / 10;
	y = xy % 10;
	if (x == size && y == size)
	{
		if (ft_checkmatch(box, size))
		{
			if (i >= size)
				return (1);
			else
				return (2);
		}
		else
			return (0);
	}
	return (3);
}

int	ft_manage_max(int **box, int size, int x, int y)
{
	if (x == size)
	{
		if (ft_backtracking(box, size, 1, y + 1))
			return (2);
		return (0);
	}
	else
	{
		if (ft_backtracking(box, size, x + 1, y))
			return (2);
		return (0);
	}
	return (3);
}

int	ft_backtracking(int **box, int size, int x, int y)
{
	int	i;
	int	tmp;

	i = 1;
	while (1)
	{
		while (i <= size && check(box, i, (10 * x + y), size))
			i++;
		if (i <= size)
			box[x][y] = i;
		else
		{
			box[x][y] = 0;
			return (1);
		}
		tmp = ft_manage_end(box, size, 10 * x + y, i);
		if (tmp < 2)
			return (tmp);
		else if (tmp == 2)
			continue ;
		tmp = ft_manage_max(box, size, x, y);
		if (tmp < 2)
			return (tmp);
	}
}
