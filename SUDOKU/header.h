/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 21:16:16 by salassam          #+#    #+#             */
/*   Updated: 2015/10/24 09:37:31 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	print_tab(int **tab);
int		**alloc_tab(void);
void	free_tab(int **tab);
int		throw_error(void);
int		populate_tab(int **tab, int size, char **str);
int		is_valid_move(int **tab, int current_nb, int row, int col);
int		try_move(int **tab, int row, int col, int is_reverse);
int		try_move_rev(int **tab, int row, int col, int is_reverse);
int		find_solution(int **tab, int row, int col, int is_reverse);
int		compare_solution(int **tab1, int **tab2);
#endif
