/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:57:08 by paescano          #+#    #+#             */
/*   Updated: 2022/08/13 15:59:13 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void);
void	print_n(char x, char y, char z, char w);

void	print_n(char x, char y, char z, char w)
{
	if ((x * 10 + y) < (z * 10 + w))
	{
		if (!((x == '9') && (y == '8') && (z == '9') && (w == '9')))
		{
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, " ", 1);
			write(1, &z, 1);
			write(1, &w, 1);
			write(1, ", ", 2);
		}
		else
		{
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, " ", 1);
			write(1, &z, 1);
			write(1, &w, 1);
		}
	}
}

void	ft_print_comb2(void)
{
	char	i[4];

	i[0] = '0';
	while (i[0] <= '9')
	{
		i[1] = '0';
		while (i[1] <= '9')
		{
			i[2] = '0';
			while (i[2] <= '9')
			{
				i[3] = '0';
				while (i[3] <= '9')
				{
					print_n(i[0], i[1], i[2], i[3]);
					i[3]++;
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
