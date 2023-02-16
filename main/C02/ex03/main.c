/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:25:25 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 13:33:41 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[5] = "12345";
	
	printf("12345 : %d \n", ft_str_is_numeric(&str1[5]));

	char	str2[10] = "H3LL0W0RLD";
	printf("H3LL0W0RLD : %d \n", ft_str_is_numeric(&str2[10]));

	char	str3[1] = "";
	printf("null : %d \n", ft_str_is_numeric(&str3[1]));
	return (0);
}
