/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/18 10:57:11 by salassam          #+#    #+#             */
/*   Updated: 2015/10/25 20:57:34 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comb(char a, char w);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char x;
	char y;

	x = 0;
	y = 1;
	while (x < 98)
	{
		if (y == 100)
		{
			x += 1;
			y = 0;
		}
		if (x >= y)
			y = x + 1;
		ft_comb(x, y);
		y += 1;
	}
}

void	ft_comb(char a, char w)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
	ft_putchar(' ');
	ft_putchar((w / 10) + '0');
	ft_putchar((w % 10) + '0');
	if (a != 98)
		ft_putchar(',');
	if (a != 98)
		ft_putchar(' ');
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
