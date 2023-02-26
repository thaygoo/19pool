/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:54:56 by nesdebie          #+#    #+#             */
/*   Updated: 2023/02/19 20:47:29 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	**free_array(int **box, int i)
{
	int	size;

	size = i;
	while (i >= 0)
	{
		free(box[i]);
		i--;
	}
	free (box);
	return (NULL);
}

int	main(int ac, char **av)
{
	int	**box;
	int	size;

	box = NULL;
	if (ac != 2)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	size = ft_parsing(av[1]);
	if (size == 0)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	box = create_array(av[1], size);
	if (ft_backtracking(box, size, 1, 1))
		write(1, "Error\n", 6);
	else
		ft_print(box, size);
	free_array(box, (size + 1));
	return (0);
}
