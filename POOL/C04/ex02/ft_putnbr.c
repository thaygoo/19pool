/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:50:32 by hburton           #+#    #+#             */
/*   Updated: 2023/02/21 16:52:27 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(char *t, int nbchiffres, int isneg)
{
	if (isneg)
		write(1, "-", 1);
	while (nbchiffres >= 0)
	{
		ft_putchar('0' + t[nbchiffres--]);
	}
}

void	ft_putnbr2(int nb, char *t, int nbchiffres, int isneg)
{
	while (nb != 0)
	{
		t[nbchiffres++] = nb % 10;
		nb /= 10;
	}
	display(t, nbchiffres - 1, isneg);
}

void	ft_putnbr(int nb)
{
	int		nbchiffres;
	int		isneg;
	char	tab[20];

	nbchiffres = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		isneg = 1;
		nb = -nb;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else
		isneg = 0;
	ft_putnbr2(nb, tab, nbchiffres, isneg);
}

/** int	main(void)
{
	ft_putnbr(23);
	return (0);
} 
 **/