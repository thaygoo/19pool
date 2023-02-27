/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:21:50 by hburton           #+#    #+#             */
/*   Updated: 2023/02/27 13:43:59 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int			i;
	long int	n;

	n = (long int)nb;
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n < 2)
		return (0);
	i = 3;
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/** 
 * #include <stdio.h>
 * 
 * int	main(void)
 * {
 * printf("4 :  %d", ft_is_prime(4));
 * return (0);
} **/