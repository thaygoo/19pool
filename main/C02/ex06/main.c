/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:50:37 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 14:21:40 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[5] = {12, 2, 3, 66, 0};
	
	printf("nop rint  : %d \n", ft_str_is_printable(&str1[5]));

	char	str2[9] = "MAJuSCuLE";
	printf("MAJuSCuLE : %d \n", ft_str_is_printable(&str2[9]));

	char	str3[0] = "";
	printf("null : %d \n", ft_str_is_printable(&str3[0]));
	return (0);
}
