/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:08:22 by paescano          #+#    #+#             */
/*   Updated: 2022/08/13 17:24:29 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void);
void	show(char a, char b, char c);

void	show(char a, char b, char c)
{
	char	l[2];

	l[0] = ',';
	l[1] = ' ';
	if (a == '7' && b == '8' && c == '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &l[0], 1);
		write(1, &l[1], 1);
	}
}

void	ft_print_comb(void)
{
	char	n[3];

	n[0] = '0';
	while (n[0] <= '7')
	{
		n[1] = '1';
		while (n[1] <= '8')
		{
			n[2] = '2';
			while (n[2] <= '9')
			{
				if (n[0] < n[1] && n[1] < n[2])
				{
					show(n[0], n[1], n[2]);
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
