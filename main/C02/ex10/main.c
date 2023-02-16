/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:23:13 by hburton           #+#    #+#             */
/*   Updated: 2023/02/16 16:32:32 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(int argc, char const *argv[])
{
	char	src1[] = "Copie moi !";
	char	dest1[] = "test";
	
	ft_strlcpy(dest1, src1, 11);
	printf("%s", dest1);
	return 0;
}
