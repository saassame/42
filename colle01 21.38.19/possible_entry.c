/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible_entries.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchaleil <bchaleil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 19:34:15 by bchaleil          #+#    #+#             */
/*   Updated: 2015/10/25 21:36:01 by bchaleil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_not_in_block(int test, int sudoku[9][9], int x, int y);
int	is_not_in_x(int test, int sudoku[9][9], int x, int y);
int	is_not_in_y(int test, int sudoku[9][9], int x, int y);
int	check_in_x_block(int x, int block_x);

int	possible_entry(int sudoku[9][9], int x, int y)
{
	int t;

	t = 1;
	if (sudoku[8][8] != 0)
		return (1);
	if (x > 8)
		return (possible_entry(sudoku, x = 0, y + 1));
	if (sudoku[y][x] != 0)
		return (possible_entry(sudoku, x + 1, y));
	while (t <= 9)
	{
		if (is_not_in_x(t, sudoku, x, y) && is_not_in_y(t, sudoku, x, y)
				&& is_not_in_block(t, sudoku, x, y))
		{
			sudoku[y][x] = t;
			if (possible_entry(sudoku, x + 1, y))
				return (1);
		}
		t++;
	}
	sudoku[y][x] = 0;
	return (0);
}

int	is_not_in_x(int test_val, int sudoku[9][9], int x, int y)
{
	int ix;

	ix = 0;
	while (ix < 9)
	{
		if (sudoku[y][ix] == test_val)
		{
			return (0);
		}
		ix++;
	}
	return (1);
}

int	is_not_in_y(int test_val, int sudoku[9][9], int x, int y)
{
	int iy;

	iy = 0;
	while (iy < 9)
	{
		if (sudoku[iy][x] == test_val)
		{
			return (0);
		}
		iy++;
	}
	return (1);
}

int	is_not_in_block(int test, int sudoku[9][9], int x, int y)
{
	int block_x;
	int block_y;
	int ix;
	int iy;

	block_x = check_in_x_block(x, block_x);
	if (y < 3)
		block_y = 0;
	else if (y >= 3 && y < 6)
		block_y = 3;
	else
		block_y = 6;
	iy = block_y;
	while (iy < (block_y + 3))
	{
		ix = block_x;
		while (ix < (block_x + 3))
		{
			if (sudoku[iy][ix] == test)
				return (0);
			ix++;
		}
		iy++;
	}
	return (1);
}

int	check_in_x_block(int x, int block_x)
{
	if (x < 3)
		block_x = 0;
	else if (x >= 3 && x < 6)
		block_x = 3;
	else
		block_x = 6;
	return (block_x);
}
