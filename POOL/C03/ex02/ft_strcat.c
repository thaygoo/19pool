/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:12:58 by hburton           #+#    #+#             */
/*   Updated: 2023/02/20 10:37:37 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// char *ft_strcat(char *dest, char *src)
// {
	
// }

int main(int argc, char const *argv[])
{
	char	s1[] = "test";
	char	s2[] = "copy";

	printf("%s", strcat(s1, s2));
	return 0;
}
