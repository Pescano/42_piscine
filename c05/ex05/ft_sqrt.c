/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:34:15 by paescano          #+#    #+#             */
/*   Updated: 2022/08/30 20:34:43 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	x;
	long	i;

	i = nb;
	if (i <= 0)
		return (0);
	if (i == 1)
		return (1);
	x = 2;
	if (i >= x)
	{
		while (x * x <= i)
		{
			if (x * x == i)
				return (x);
			x++;
		}
	}
	return (0);
}

int	main(void)//main del 05
{
	int	x[2];

	x[0] = -1;
	x[1] = ft_sqrt(x[0]);
	printf("%i", x[1]);
}