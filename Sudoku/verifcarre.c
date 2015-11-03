/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifcarre.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 23:37:26 by salassam          #+#    #+#             */
/*   Updated: 2015/10/24 23:37:27 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verifcarre(char **argv, int ch, int p)
{
	int i;
	int j;
	int k;
	int l;

	i = (ch / 3) * 3;
	j = (p / 3) * 3;
	while (argv[i][j] != argv[ch][p])
	{
		if (j == j + 3)
		{
			k = (p / 3) * 3;
			while (argv[i + 1][k] != argv[ch][p])
			{
				if (k == k + 3)
				{
					l = (p / 3) * 3;
					while (argv[i + 2][l] != argv[ch][p])
					{
						if (l == l + 3)
						{
							return (1);
						}
						l++;
					}
					k++;
				}
			}
			j++;
		}
	}
	return (0);
}
