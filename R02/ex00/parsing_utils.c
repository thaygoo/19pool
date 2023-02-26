/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hburton <hburton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:03:09 by jepicron          #+#    #+#             */
/*   Updated: 2023/02/26 17:41:43 by hburton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_count_zeros(char *tmp)
{
	int	i;

	i = 1;
	while (tmp[i] == '0' && tmp[i] != 0)
		i++;
	if (i > 2 && i < 5)
		return (28 + i - 3);
	if (i == 7)
		return (30);
	if (i == 10)
		return (31);
	return (-2);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{	
	char	*dup;
	int		i;

	i = ft_strlen(s);
	dup = malloc((i + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static	int	ft_join( char *s1, char*s3, int j)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		j++;
		i++;
	}
	return (j);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s3 = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	j = ft_join(s1, s3, j);
	j = ft_join(s2, s3, j);
	i = 0;
	s3[j] = '\0';
	return (s3);
}
