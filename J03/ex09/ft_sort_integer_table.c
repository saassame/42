/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 18:03:51 by salassam          #+#    #+#             */
/*   Updated: 2015/11/02 18:03:54 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *table, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size)
	{
		if (table[i] > table[i + 1])
		{
			temp = (table[i + 1]);
			table[i + 1] = table[i];
			table[i] = temp;
			i = 0;
		}
		else
			i++;
	}
}
