/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:58:51 by paescano          #+#    #+#             */
/*   Updated: 2022/08/30 19:24:31 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	x;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	x = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (x);
}
