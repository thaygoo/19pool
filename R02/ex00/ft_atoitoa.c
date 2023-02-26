/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:44:59 by tdomb             #+#    #+#             */
/*   Updated: 2023/02/26 17:23:05 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

long	ft_atoi(char *str)
{
	long	nbr;
	int		i;

	i = 0;
	while ((*(str + i) >= 9 && *(str + i) <= 13) || *(str + i) == 32)
		i++;
	if (*(str + i) == '+')
		i++;
	else if (*(str + i) == '-')
		return (-1);
	else if (!(*(str + i) <= '9' && str[i] >= '0'))
		return (-1);
	nbr = 0;
	while (*(str + i) >= 48 && *(str + i) <= 57)
		nbr = (nbr * 10) + (*(str + i++)) - 48;
	if (nbr > 4294967295)
		return (-1);
	return (nbr);
}

int	len_for_ans(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa(long nbr)
{
	int		len;
	int		c;
	char	*str;
	int		is_neg;

	len = len_for_ans(nbr);
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	is_neg = 0;
	while (len >= is_neg)
	{
		c = nbr % 10;
		str[len] = c + 48;
		nbr = nbr / 10;
		len--;
	}
	return (str);
}

char	*ft_atoitoa(char *str)
{
	long	nbr;
	char	*res;

	nbr = ft_atoi(str);
	if (nbr < 0)
		return (NULL);
	res = ft_itoa(nbr);
	return (res);
}
