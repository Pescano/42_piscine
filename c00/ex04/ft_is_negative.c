/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:01:18 by paescano          #+#    #+#             */
/*   Updated: 2022/08/13 15:53:36 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	l0;
	char	l1;

	l0 = 'P';
	l1 = 'N';
	if (n >= 0)
	{
		write(1, &l0, 1);
	}	
	else
	{
		write(1, &l1, 1);
	}
}
