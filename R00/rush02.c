/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:18:26 by hburton           #+#    #+#             */
/*   Updated: 2023/02/12 15:25:13 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(char left, char center, char right, int x)
{
	ft_putchar(left);
	x--;
	while (x > 1)
	{
		ft_putchar(center);
		x--;
	}
	if (x == 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush02(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	ft_putline('A', 'B', 'A', x);
	y--;
	while (y > 1)
	{
		ft_putline('B', ' ', 'B', x);
		y--;
	}
	if (y == 1)
		ft_putline('C', 'B', 'C', x);
}
