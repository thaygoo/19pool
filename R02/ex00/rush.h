/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jepicron <jepicron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:05:12 by jepicron          #+#    #+#             */
/*   Updated: 2023/02/26 18:15:29 by jepicron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_count_zeros(char *tmp);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s);
int		ft_strlen(char *str);
char	**sepnum(char	**str);
int		number_of_trio(char **str);
char	**check_file(int fd);
char	*ft_atoitoa(char *str);
void	ft_print_num(char **dict, char	**sepnum, int n_of_trio);
void	print_digit(char c, char **dict, int *m, int *j);
void	print_tenth2(char c, char **dict, int *m, int *k);
void	print_tenth(char c, char **dict, int *m, int *k);
void	print_hundreds(char c, char **dict, int *m, int *j);
void	print_separator(int n, char **dict, int *k);
char	**check_for_space(char **dict);
void	free_tab(char **tab);
char	*ft_ft_strjoin(char	*result, char*tmp, int *i);

#endif
