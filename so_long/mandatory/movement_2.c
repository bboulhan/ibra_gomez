/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:51:50 by bboulhan          #+#    #+#             */
/*   Updated: 2022/04/13 23:51:59 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_left_2(t_map *map, int j, int i)
{
	if (map->table[j][i - 1] == 'C')
	{
		map->table[j][i - 1] = 'P';
		map->table[j][i] = '0';
		map->c--;
		write_move(map);
	}
	else if (map->table[j][i - 1] == 'E')
	{
		if (map->c == 0)
		{
			write_move(map);
			write (1, "you win !\n", 10);
			free_map(map);
			exit(0);
		}
	}
}

void	move_left(t_map *map)
{
	int	i;
	int	j;

	i = map->cord_x;
	j = map->cord_y;
	if (map->table[j][i - 1] == '0')
	{
		map->table[j][i - 1] = 'P';
		map->table[j][i] = '0';
		write_move(map);
	}
	else
		move_left_2(map, j, i);
}

void	move_down_2(t_map *map, int j, int i)
{
	if (map->table[j + 1][i] == 'C')
	{
		map->table[j + 1][i] = 'P';
		map->table[j][i] = '0';
		map->c--;
		write_move(map);
	}
	else if (map->table[j + 1][i] == 'E')
	{
		if (map->c == 0)
		{
			write_move(map);
			write (1, "you win !\n", 10);
			free_map(map);
			exit(0);
		}
	}
}

void	move_down(t_map *map)
{
	int	i;
	int	j;

	i = map->cord_x;
	j = map->cord_y;
	if (map->table[j + 1][i] == '0')
	{
		map->table[j + 1][i] = 'P';
		map->table[j][i] = '0';
		write_move(map);
	}
	else
		move_down_2(map, j, i);
}
