/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:33:39 by hburton           #+#    #+#             */
/*   Updated: 2023/02/28 13:54:18 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*table;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	table = malloc((max - min) * sizeof(int));
	if (!table)
		return (NULL);
	while ((max - min) > i)
	{
		table[i] = min + i;
		i++;
	}
	return (table);
}

/**
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		printf("%d \n", ft_range(10, 20)[++i]);
	}
	return (0);
}
**/