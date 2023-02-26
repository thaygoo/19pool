/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:57:16 by nesdebie          #+#    #+#             */
/*   Updated: 2023/02/19 21:01:08 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# include <unistd.h>
# include <stdlib.h>

int		ft_parsing(char *str);
int		**create_array(char *str, int size);
int		**free_array(int **box, int i);
void	ft_print(int **box, int size);
int		ft_backtracking(int **arr, int size, int x, int y);
int		ft_check_cols_up(int **box, int x, int size);
int		ft_check_cols_down(int **box, int x, int size);
int		ft_check_row_left(int **box, int y, int size);
int		ft_check_row_right(int **box, int y, int size);
int		check(int **box, int i, int xy, int size);
int		ft_checkmatch(int **box, int size);

#endif