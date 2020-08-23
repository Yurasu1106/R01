/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaurin <mbaurin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 06:51:07 by mbaurin           #+#    #+#             */
/*   Updated: 2020/08/23 21:13:59 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(int argc, char **argv)
{
	int	*point_de_vue;
	int map[5][5];

	//point_de_vue = 0;
	if (argc == 2)
	{
		if (!check_point_de_vues(argv[1]))
		{
			ft_putstr("Error\n");
		}
		point_de_vue = obtenir_point_de_vue(argv[1]);
		remplir_map(map);
		recursivite_immeuble(map, 1, 1, &point_de_vue);
		afficher_map(map);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
