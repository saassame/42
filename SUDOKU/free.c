/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 21:14:52 by salassam          #+#    #+#             */
/*   Updated: 2015/10/25 11:55:06 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		**alloc_tab(void)
{
	int i;
	int j;
	int **tab;

	i = 0;
	tab = (int **)malloc(sizeof(int *) * 9);
	while (i < 9)
	{
		tab[i] = (int *)malloc(sizeof(int) * 9);
		j = 0;
		while (j < 9)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

void	free_tab(int **tab)
{
	int i;

	i = 0;
	while (i < 9)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
