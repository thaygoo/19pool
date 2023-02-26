/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepicron <jepicron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:38:47 by jepicron          #+#    #+#             */
/*   Updated: 2023/02/26 17:56:09 by jepicron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_num(char **dict, char	**sepnum, int n_of_trio)
{
	int	i;
	int	m;
	int	j;

	i = 0;
	j = 0;
	while (n_of_trio > 0)
	{
		m = 0;
		if (sepnum[i][0] >= '1' && sepnum[i][0] <= '9')
			print_hundreds(sepnum[i][0], dict, &m, &j);
		if (sepnum[i][1] >= '2' && sepnum[i][1] <= '9')
			print_tenth(sepnum[i][1], dict, &m, &j);
		if (sepnum[i][2] >= '0' && sepnum[i][2] <= '9' && sepnum[i][1] == '1')
			print_tenth2(sepnum[i][2], dict, &m, &j);
		if (sepnum[i][2] >= '1' && sepnum[i][2] <= '9' && sepnum[i][1] != '1')
			print_digit(sepnum[i][2], dict, &m, &j);
		if (n_of_trio >= 2 && m)
			print_separator(n_of_trio, dict, &j);
		n_of_trio--;
		i++;
	}
}
