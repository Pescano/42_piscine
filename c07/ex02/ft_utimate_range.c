/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utimate_range.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:59:48 by paescano          #+#    #+#             */
/*   Updated: 2022/09/01 11:09:43 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x[2];
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	x[0] = max - min;
	x[1] = 0;
	buffer = malloc(x[0] * sizeof(int));
	if (buffer == 0)
		return (-1);
	*range = buffer;
	while (x[1] < x[0])
	{
		buffer[x[1]] = min + x[1];
		x[1]++;
	}
	return (x[0]);
}

int	main(void)// main 02
{
	int	size;
	int	*tab;
	int	i;

	size = ft_ultimate_range(&tab, 5, 5);
	i = 0;
	printf("%i\n", size);
	while (i < size)
	{
		printf("%d - ", tab[i]);
		i++;
	}
}