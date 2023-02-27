/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:21:48 by hburton           #+#    #+#             */
/*   Updated: 2023/02/27 13:41:27 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	while (i * i < nb && i < 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/** #include <stdio.h>

int	main(void)
{
	printf("36 :  %d", ft_sqrt(36));
	return (0);
}
 **/