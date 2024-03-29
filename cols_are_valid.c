/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cols_are_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:13:14 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/05/31 18:16:19 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cols_are_valid(char matrx[6][6])
{
	int	x;

	x = 1;
	while (x <= 4)
	{
		if (matrx[0][x] == '4' && matrx[5][x] >= '2')
			return (0);
		if ((matrx[0][x] == '3' || matrx[0][x] == '2') && matrx[5][x] == '4')
			return (0);
		if (matrx[0][x] == '1' && matrx[5][x] == '1')
			return (0);
		if (matrx[0][x] == '3' && matrx[5][x] == '3')
			return (0);
		x++;
	}
	return (1);
}
