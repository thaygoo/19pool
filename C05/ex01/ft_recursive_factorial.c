/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:21:40 by hburton           #+#    #+#             */
/*   Updated: 2023/02/27 13:37:28 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/** #include <stdio.h>

int	main(void)
{
	printf("4 :  %d", ft_recursive_factorial(4));
	return (0);
}
 **/