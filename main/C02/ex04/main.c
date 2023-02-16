/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:34:51 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 13:45:29 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str1[9] = "minuscule";
	
	printf("minuscule : %d \n", ft_str_is_lowercase(&str1[9]));

	char	str2[9] = "MAJuSCuLE";
	printf("MAJuSCuLE : %d \n", ft_str_is_lowercase(&str2[9]));

	char	str3[1] = "";
	printf("null : %d \n", ft_str_is_lowercase(&str3[1]));
	return (0);
}
