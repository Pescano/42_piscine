/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_fill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:38:38 by paescano          #+#    #+#             */
/*   Updated: 2022/08/21 17:40:02 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	scan_three_two(char map[][6], int row, int col)
{
	if (row == 0 && map[row][col] == '3')
	{
		map[row + 3][col] = '4';
	}
	else if (row == 5 && map[row][col] == '3')
	{
		map[row - 3][col] = '4';
	}
	else if (col == 0 && map[row][col] == '3')
	{
		map[row][col + 3] = '4';
	}
	else if (col == 5 && map[row][col] == '3')
	{
		map[row][col - 3] = '4';
	}
}

void	scan_one_two(char map[][6], int row, int col)
{
	if (row == 0 && map[row][col] == '1')
	{
		map[row + 4][col] = '3';
	}
	else if (row == 5 && map[row][col] == '1')
	{
		map[row - 4][col] = '3';
	}
	else if (col == 0 && map[row][col] == '1')
	{
		map[row][col + 4] = '3';
	}
	else if (col == 5 && map[row][col] == '1')
	{
		map[row][col - 4] = '3';
	}
}

void	fill_map(char map[][6])
{
	int	row;
	int	col;

	row = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			map[row][col] = '0';
			col++;
		}
		row++;
	}
}
