/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:21:54 by hburton           #+#    #+#             */
/*   Updated: 2023/02/27 13:43:03 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb < 2)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/** #include <stdio.h>

int	main(void)
{
	printf("1000 :  %d", ft_find_next_prime(1000));
	return (0);
} **/