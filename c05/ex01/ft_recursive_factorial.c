/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:37:05 by paescano          #+#    #+#             */
/*   Updated: 2022/08/30 19:24:46 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		x = x * nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (x);
}
