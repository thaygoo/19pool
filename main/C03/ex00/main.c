/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoburton <hugoburton@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:00:45 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 19:00:06 by hugoburton       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	char str1[] = "Hello world";
	char str2[] = "";

	printf("strcmp : %d \n", strcmp(str1, str2));
	printf("ft_strcmp : %d", ft_strcmp(str1, str2));
	return 0;
}
