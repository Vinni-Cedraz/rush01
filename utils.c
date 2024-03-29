/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:19:00 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/06/01 17:20:03 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int	check_prefix(char *s1, char *prefix)
{
	int	i;

	i = 0;
	if (!prefix)
		return (-1);
	while (prefix[i] && 'x' != prefix[i])
	{
		if (s1[i] != prefix[i])
			return (0);
		i++;
	}
	return (1);
}

void	print_matrix(char matrix[6][6], int width)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (matrix[i])
	{
		while (j < width)
		{
			ft_putchar(matrix[i][j]);
			if (j != (width - 1))
				ft_putchar(' ');
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
}

void	print_inner_matrix(char matrix[6][6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			ft_putchar(matrix[i][j]);
			if (j != 4)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_bzero(char str[], int size)
{
	if (str)
		while (size)
			str[size--] = 0;
	str[0] = 0;
}
