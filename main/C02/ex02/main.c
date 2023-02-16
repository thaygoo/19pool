/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:33:36 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 12:42:28 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		printf("%c, \n ", str[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char str1[10] = "sjeudnajd";
	ft_str_is_alpha(&str1[10]);
	return (0);
}
