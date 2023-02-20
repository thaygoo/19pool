/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:55:28 by hugoburton        #+#    #+#             */
/*   Updated: 2023/02/20 12:39:05 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char str1[] = "Hello world";
	char str2[] = "Hello ";

	printf("strcmp : %d \n", strncmp(str1, str2, 10));
	printf("ft_strcmp : %d", ft_strncmp(str1, str2, 10));
	return 0;
}

