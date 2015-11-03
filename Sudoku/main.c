/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salassam <salassam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 23:36:43 by salassam          #+#    #+#             */
/*   Updated: 2015/10/24 23:36:45 by salassam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_resolution(char **argv, int ch, int p, int n);

int		main(int argc, char **argv)
{
	int	j;

	ft_resolution(argv, 1, 0, 1);
	j = 1;
	while (argc > j)
	{
		ft_putstr(argv[j]);
		j++;
		ft_putchar('\n');
	}
	return (0);
}
