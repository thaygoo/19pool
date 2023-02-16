/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:33:39 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 16:36:16 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(int argc, char const *argv[])
{
	char	src1[] = "Coucou\ntu vas bien ?";
	
	ft_putstr_non_printable(src1);
	return 0;
}
