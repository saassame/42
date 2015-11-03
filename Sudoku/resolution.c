/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolution.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 23:37:00 by salassam          #+#    #+#             */
/*   Updated: 2015/10/24 23:37:02 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_verifligne(char **argv, int ch, int p);
int ft_verifcarre(char **argv, int ch, int p);
int ft_verifcolone(char **argv, int ch, int p);
int ft_resolution(char **argv, int ch, int p, int n);

int	ft_resolution(char **argv, int ch, int p, int n)
{
	while (argv[ch][p] != '.')
	{
		if (p == 8)
			ch++;
		p = 0;
	}
	argv[ch][p] = n;
	if (ft_verifligne(argv, ch, p) == 1)
	{
		if (ft_verifcolone(argv, ch, p) == 1)
		{
			if (ft_verifcarre(argv, ch, p) == 1)
			{
				if (ch == 9 && p == 8)
				{
					n = 1;
					ft_resolution(argv, ch, p++, n);
				}
			}
		}
		argv[ch][p] = '.';
		ft_resolution(argv, ch, p, n++);
	}
	return (0);
}
