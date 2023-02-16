/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:50:37 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 13:58:12 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str1[9] = "MAJUSCULE";
	
	printf("MAJUSCULE : %d \n", ft_str_is_uppercase(&str1[9]));

	char	str2[9] = "MAJuSCuLE";
	printf("MAJuSCuLE : %d \n", ft_str_is_uppercase(&str2[9]));

	char	str3[1] = "";
	printf("null : %d \n", ft_str_is_uppercase(&str3[1]));
	return (0);
}
