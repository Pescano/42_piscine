/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtraking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:00:48 by paescano          #+#    #+#             */
/*   Updated: 2022/08/23 11:47:41 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_towers(char map[][6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			write(1, &map[i][j], 1);
			if (j != 4)
				write(1, " ", 1);
			j++ ;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	number_unassigned(int *row, int *col, char map[][6])
{
	int		i;
	int		j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (map[i][j] == '0')
			{
				*row = i;
				*col = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	is_safe(char n, int r, int c, char map[][6])
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (map[r][i] == n)
			return (0);
		i++;
	}
	i = 1;
	while (i < 5)
	{
		if (map[i][c] == n)
			return (0);
		i++;
	}
	return (1);
}

int	solve_towers(char map[][6])
{
	int		row;
	int		col;
	char	i;

	if (number_unassigned(&row, &col, map) == 0)
		return (1);
	i = '1';
	while (i <= '4')
	{
		if (is_safe(i, row, col, map))
		{
			map[row][col] = i;
			if (solve_towers(map))
				return (1);
		}
		map[row][col] = 0;
		i++;
	}
	return (0);
}
