/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepicron <jepicron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:27:47 by jepicron          #+#    #+#             */
/*   Updated: 2023/02/26 18:13:38 by jepicron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_ft_strjoin(char	*result, char*tmp, int *i)
{
	char	*res;

	res = ft_strjoin(result, tmp);
	*i += 1;
	return (res);
}

void	print_error(char **dict, int ac)
{
	if (dict == NULL && (ac == 2 || ac == 3))
		write(1, "Dict Error\n", 11);
	else
		write(1, "Error\n", 6);
}

void	free_tab(char **tab)
{
	int	i;

	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free(tab);
}

int	main(int ac, char **av)
{
	char		**dict;
	char		**num;
	long		fd;
	char		*tmp;

	if (ac == 2)
		fd = open("numbers.dict", O_RDONLY);
	if (ac == 3)
		fd = open(av[1], O_RDONLY);
	if (ac > 1 && ac <= 3)
		dict = check_file(fd);
	if (ac == 2)
		tmp = ft_atoitoa(av[1]);
	if (ac == 3)
		tmp = ft_atoitoa(av[2]);
	if (tmp == NULL || dict == NULL)
	{
		print_error(dict, ac);
		return (0);
	}
	num = sepnum(&tmp);
	free(tmp);
	ft_print_num(dict, num, number_of_trio(&tmp));
	free_tab(dict);
	free_tab(num);
}
