/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:13:12 by paescano          #+#    #+#             */
/*   Updated: 2022/08/30 20:37:53 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	x;

	x = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (x <= (nb / 2))
	{
		if ((nb % x) == 0)
			return (0);
		x++;
	}
	return (1);
}

int	main(void)//main del 06
{
	int	x[2];

	x[0] = 3;
	x[1] = ft_is_prime(x[0]);
	printf("%i", x[1]);
}
