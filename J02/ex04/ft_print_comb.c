/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/16 16:59:56 by salassam          #+#    #+#             */
/*   Updated: 2015/10/25 21:36:41 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_nbr(int *nbr)
{
	nbr[0] = 48;
	nbr[1] = 48;
	nbr[2] = 48;
	return (*nbr);
}

void	ft_print_nbr(int *nbr)
{
	ft_putchar(nbr[0]);
	ft_putchar(nbr[1]);
	ft_putchar(nbr[2]);
}

void	ft_print_comb(void)
{
	int nbr[3];

	ft_nbr(nbr);
	while (nbr[0] <= 57)
	{
		if ((nbr[0] < nbr[1]) && (nbr[1] < nbr[2]))
		{
			ft_print_nbr(nbr);
			if (nbr[0] != 55)
				ft_putchar(',');
			if (nbr[0] != 55)
				ft_putchar(' ');
		}
		if (nbr[2]++ >= 57)
		{
			nbr[2] = 48;
			nbr[1]++;
		}
		if (nbr[1] == 58)
		{
			nbr[1] = 48;
			nbr[0]++;
		}
	}
}

int	main()
{
	ft_print_comb();
	return (0);
}
