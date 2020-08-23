/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplir_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaurin <mbaurin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 07:26:48 by mbaurin           #+#    #+#             */
/*   Updated: 2020/08/23 21:13:05 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

void	remplir_map(int m[5][5])
{
	int		y;
	int		x;
	int		r;

	r = 5;
	y = 1;
	while (y <= 4)
	{
		x = 1;
		while (x <= 4)
		{
			m[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	afficher_map(int p[5][5])
{
	int		i;
	int		j;
	int		r;

	r = 5;
	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			ft_putnbr(p[i][j]);
			if (j < 4)
				ft_putstr(" ");
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}

int		verification(int map[5][5], int k, int y, int x)
{
	int		i;

	i = 1;
	while (i <= 4)
	{
		if (map[i][x] == k)
			return (0);
		i++;
	}
	i = 1;
	while (i <= 4)
	{
		if (map[y][i] == k)
			return (0);
		i++;
	}
	return (1);
}

int		recursivite_immeuble(int map[5][5], int y, int x, int **point_de_vue)
{
	int		valeur;

	valeur = 1;
	while (valeur <= 4)
	{
		if (verification(map, valeur, y, x))
		{
			map[y][x] = valeur;
			valeur = 5;
		}
		valeur++;
	}
	if (y <= 4 && x <= 4)
	{
		if (y <= 4)
			recursivite_immeuble(map, y, x + 1, point_de_vue);
		if (x <= 4)
			recursivite_immeuble(map, y + 1, x, point_de_vue);
	}
	return (0);
}
