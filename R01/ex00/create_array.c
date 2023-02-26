/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:31:03 by hburton           #+#    #+#             */
/*   Updated: 2023/02/19 21:28:43 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	*new_column(int size)
{
	int	*col;
	int	i;

	i = 0;
	col = malloc(sizeof(int) * (size + 2 + 1));
	if (!col)
		return (0);
	while (i < size + 2)
	{
		col[i] = 0;
		i++;
	}
	return (col);
}

void	add_line_param(int **box, char *s, int size, int *j)
{
	int	i;

	i = 1;
	while (i <= size && s[*j])
	{
		box[i][0] = s[*j] - 48;
		i++;
		*j += 2;
	}
	i = 1;
	while (i <= size && s[*j])
	{
		box[i][size + 1] = s[*j] - 48;
		i++;
		*j += 2;
	}
}

void	add_row_param(int **box, char *s, int size, int *j)
{
	int	i;

	i = 1;
	while (i <= size && s[*j])
	{
		box[0][i] = s[*j] - 48;
		i++;
		*j += 2;
	}
	i = 1;
	while (i <= size && s[*j])
	{
		box[size + 1][i] = s[*j] - 48;
		i++;
		*j += 2;
	}
}

static int	**add_params(int **box, char *s, int size)
{
	int	j;

	j = 0;
	add_line_param(box, s, size, &j);
	add_row_param(box, s, size, &j);
	return (box);
}

int	**create_array(char *str, int size)
{
	int	**box;
	int	i;

	i = 0;
	box = malloc(sizeof(int *) * (size + 2 + 1));
	if (!box)
		return (NULL);
	while (i < (size + 2))
	{
		box[i] = new_column(size);
		if (!box[i])
			return (free_array(box, --i));
		i++;
	}
	box = add_params(box, str, size);
	return (box);
}

/**void	add_line_param(int **box, char *s, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= size && s[j])
	{
		box[i][0] = s[j] - 48;
		i++;
		j += 2;
	}
	i = 1;
	while (i <= size && s[j])
	{
		box[i][size + 1] = s[j] - 48;
		i++;
		j += 2;
	}
}

void	add_row_param(int **box, char *s, int size)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i <= size && s[j])
	{
		box[0][i] = s[j] - 48;
		i++;
		j += 2;
	}
	i = 1;
	while (i <= size && s[j])
	{
		box[size + 1][i] = s[j] - 48;
		i++;
		j += 2;
	}
}**/