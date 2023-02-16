/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:50:37 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 15:38:51 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';	
	return (str);
}

int	main(void)
{
	char	str1[] = "POURQUOI TU CRIES ?";
	
	printf("input : %s \n", str1);
	printf("result : %s", ft_strcapitalize(str1));
	return (0);
}
