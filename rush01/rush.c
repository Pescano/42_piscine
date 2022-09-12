/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:34:40 by paescano          #+#    #+#             */
/*   Updated: 2022/08/21 20:24:13 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_map(char map[][6]);
void	insert_first(char map[][6]);
void	insert_l(char map[][6]);
void	insert_last_minus(char map[][6]);
int		solve_towers(char map[][6]);
void	print_towers(char map[][6]);

void	solve(char map[][6])
{
	insert_first(map);
	insert_l(map);
	insert_last_minus(map);
	if (solve_towers(map))
		print_towers(map);
	else
		write(1, "Sin solucion\n", 14);
}

void	ft_extract(char *str, char map[][6])
{
	map[0][1] = str[0];
	map[0][2] = str[2];
	map[0][3] = str[4];
	map[0][4] = str[6];
	map[5][1] = str[8];
	map[5][2] = str[10];
	map[5][3] = str[12];
	map[5][4] = str[14];
	map[1][0] = str[16];
	map[2][0] = str[18];
	map[3][0] = str[20];
	map[4][0] = str[22];
	map[1][5] = str[24];
	map[2][5] = str[26];
	map[3][5] = str[28];
	map[4][5] = str[30];
}

int	ft_checker(char *str)
{
	int		x;
	int		r;

	r = 0;
	x = 0;
	while (str[x] != '\0' && x <= 30)
	{
		if (str[x] == '1' || str[x] == '2' || str[x] == '3' || str[x] == '4')
			r++;
		x += 2;
	}
	if (r == 16 && str[31] == '\0')
		return (1);
	else
		return (0);
}

void	rush(char *str)
{
	char	map[6][6];

	fill_map(map);
	ft_extract(str, map);
	if (ft_checker(str) == 1)
	{
		solve(map);
	}
	else
		write(2, "Error\n", 6);
}
