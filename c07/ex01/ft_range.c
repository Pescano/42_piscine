/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:14:39 by paescano          #+#    #+#             */
/*   Updated: 2022/09/01 11:06:32 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	x[2];

	if (min >= max)
		return (0);
	x[0] = max - min;
	x[1] = 0;
	range = malloc(x[0] * sizeof(int));
	if (range == 0)
		return (0);
	while (x[1] < x[0])
	{
		range[x[1]] = min + x[1];
		x[1]++;
	}
	return (range);
}

int	main(void)// main 01
{
	int size;
	int *tab;
	int i;

	size = 15 - 5;
	i = 0;
	tab = ft_range(5, 15);
	while (i < size)
	{
		printf("%d - ", tab[i]);
		i++;
	}
}