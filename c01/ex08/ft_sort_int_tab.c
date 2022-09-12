/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 11:10:27 by paescano          #+#    #+#             */
/*   Updated: 2022/08/15 20:56:25 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*primero;
	int	*segundo;
	int	x;
	int	y;

	primero = tab - 1;
	x = 0;
	while (x < size)
	{
		segundo = tab + x;
		y = x + 1;
		primero++;
		while (y < size)
		{
			segundo++;
			if (*segundo < *primero)
			{
				ft_swap(primero, segundo);
			}
			y++;
		}
		x++;
	}
}
