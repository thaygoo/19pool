/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:33:36 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 16:38:59 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[5] = "salut";
	
	printf("salut : %d \n", ft_str_is_alpha(&str1[5]));

	char	str2[9] = "N0TALPHA";
	printf("N0TALPHA : %d \n", ft_str_is_alpha(&str2[9]));
	return (0);
}
