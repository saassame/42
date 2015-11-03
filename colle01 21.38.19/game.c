/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 10:36:54 by smrabet           #+#    #+#             */
/*   Updated: 2015/10/25 21:24:54 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_true(char **argv);
int		possible_entry(int sudoku[9][9], int x, int y);
void	start(int grid[9][9]);

void	ft_print_grid(int grid[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(grid[i][j] + 48);
			if (j < 9)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int grid[9][9];
	int i;
	int j;

	if (argc != 10 || ft_true(argv) != 1)
		write(1, "Erreur", 6);
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (j <= 9)
			{
				if (argv[i][j] == '.')
					grid[i - 1][j] = 0;
				else
					grid[i - 1][j] = (argv[i][j] - 48);
				j++;
			}
			i++;
		}
		start(grid);
	}
	return (0);
}

void	start(int grid[9][9])
{
	possible_entry(grid, 0, 0);
	ft_print_grid(grid);
}
