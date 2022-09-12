/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:49:07 by paescano          #+#    #+#             */
/*   Updated: 2022/08/21 17:40:43 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	scan_three_two(char map[][6], int row, int col);
void	scan_one_two(char map[][6], int row, int col);
void	fill_map(char map[][6]);

void	insert_first(char map[][6])
{
	int	row;
	int	col;

	row = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			if (map[row][col] == '1')
			{
				if (row == 0)
					map[1][col] = '4';
				if (row == 5)
					map[4][col] = '4';
				if (col == 0)
					map[row][1] = '4';
				if (col == 5)
					map[row][4] = '4';
			}
			col++;
		}
		row++;
	}
}

void	insert_l_row(int col, int row, char map[][6])
{
	if (row == 0)
	{
		map[1][col] = '1';
		map[2][col] = '2';
		map[3][col] = '3';
		map[4][col] = '4';
	}
	if (row == 5)
	{
		map[1][col] = '4';
		map[2][col] = '3';
		map[3][col] = '2';
		map[4][col] = '1';
	}
}

void	insert_l_col(int col, int row, char map[][6])
{
	if (col == 0)
	{
		map[row][1] = '1';
		map[row][2] = '2';
		map[row][3] = '3';
		map[row][4] = '4';
	}
	if (col == 5)
	{
		map[row][1] = '4';
		map[row][2] = '3';
		map[row][3] = '2';
		map[row][4] = '1';
	}
}

void	insert_l(char map[][6])
{
	int	row;
	int	col;

	row = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			if (row == 0 && map[row][col] == '4')
				insert_l_row(col, row, map);
			if (row == 5 && map[row][col] == '4')
				insert_l_row(col, row, map);
			if (col == 0 && map[row][col] == '4')
				insert_l_col(col, row, map);
			if (col == 5 && map[row][col] == '4')
				insert_l_col(col, row, map);
			col++;
		}
		row++;
	}
}

void	insert_last_minus(char map[][6])
{
	int	r;
	int	c;

	r = 0;
	while (r < 6)
	{
		c = 0;
		while (c < 6)
		{
			if ((r == 0 && map[r][c] == '3' && map[r +5][c] == '2')
				|| (r == 5 && map[r][c] == '3' && map[r - 5][c] == '2')
				|| (c == 0 && map[r][c] == '3' && map[r][c + 5] == '2')
				|| (c == 5 && map[r][c] == '3' && map[r][c - 5] == '2'))
				scan_three_two(map, r, c);
			if ((r == 0 && map[r][c] == '1' && map[r + 5][c] == '2')
				|| (r == 5 && map[r][c] == '1' && map[r - 5][c] == '2')
				|| (c == 0 && map[r][c] == '1' && map[r][c + 5] == '2')
				|| (c == 5 && map[r][c] == '1' && map[r][c -5] == '2'))
				scan_one_two(map, r, c);
			c++;
		}
		r++;
	}
}
