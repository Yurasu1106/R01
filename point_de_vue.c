/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_point_de_vue.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaurin <mbaurin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 07:01:37 by mbaurin           #+#    #+#             */
/*   Updated: 2020/08/23 21:11:44 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void ft_putnbr(int nb);

int		check_point_de_vues(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '4')
			i++;
		str++;
	}
	if (i != 16)
		return (0);
	return (1);
}

int		*obtenir_point_de_vue(char *str)
{
	int		*point_de_vue;
	int		i;
	int		j;
	int		r;
	int 	c;

	r = 5;
	c = 5;
	i = 1;
	j = 1;
	point_de_vue = (int *)malloc(r * c * sizeof(int));

	while (*str)
	{;
	//if (i == 1)
		//point_de_vue[j] = malloc(sizeof(int) * 9);
		if (*str >= '1' && *str <= '4')
		{
	
			*(point_de_vue + i*c + j) = *str - 48;
			i++;
		}
		if (i == 5)
		{

			i = 1;
			j++;
		}

		str++;
	};
	return (point_de_vue);
}
