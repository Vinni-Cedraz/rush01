/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:48:26 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/05/31 18:20:22 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		cols_are_valid(char **args);
int		lines_are_valid(char **args);
int		lines_are_valid(char **args);
void	print_borders(char **matrix, int width);
char	**init_matrix(char **argv);
void	free_matrix(char **matrix, int height);
void	putspaces(void);
void	putspace(void);
void	ft_putchar(char c);

#endif
