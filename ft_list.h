/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 20:41:28 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/23 20:47:25 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		check_point_de_vues(char *str);
int		*obtenir_point_de_vue(char *str);
void	remplir_map(int m[5][5]);
void	afficher_map(int p[5][5]);
int		recursivite_immeuble(int map[5][5], int y, int x, int **point_de_vue);
#endif
