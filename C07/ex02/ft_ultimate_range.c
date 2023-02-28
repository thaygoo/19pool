/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:54:24 by hburton           #+#    #+#             */
/*   Updated: 2023/02/28 15:59:06 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!range)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/** 
#include <stdio.h>

int	main(void)
{
	int	i;
	int	**test;

	ft_ultimate_range(test, 10, 20);
	i = 0;
	while (i < 10)
	{
		printf("%i \n", (*test)[i]);
		i++;
	}
	return (0);
}
**/