/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:02:55 by hburton           #+#    #+#             */
/*   Updated: 2023/02/19 20:44:53 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_parsing(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if ((str[0] < 49 || str[0] > 58)
		|| (str[ft_strlen(str) - 1] < 49 || str[ft_strlen(str)] - 1 > 58))
		return (0);
	while (str[i])
	{
		if ((str[i] > 48 && str[i] < 58)
			&& (str[i + 1] == 32 || str[i + 1] == '\0'))
			count++;
		i += 2;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] > (count / 4) + 48)
			return (0);
		i++;
	}
	if (--count % 4 != 0 || count > 36)
		return (0);
	return (count / 4);
}
