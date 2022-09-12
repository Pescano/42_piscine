/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:51:50 by paescano          #+#    #+#             */
/*   Updated: 2022/08/25 10:54:32 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	x[3];

	x[0] = 0;
	x[1] = 1;
	x[2] = 0;
	while ((str[x[0]] >= '\t' && str[x[0]] <= '\r') || str[x[0]] == ' ')
		x[0]++;
	while (str[x[0]] == '+' || str[x[0]] == '-')
	{
		if (str[x[0]] == '-')
			x[1] = x[1] * -1;
		x[0]++;
	}
	while (str[x[0]] >= '0' && str[x[0]] <= '9' && str[x[0]] != '\0')
	{
		x[2] = x[2] * 10;
		x[2] = x[2] + str[x[0]] - 48;
		x[0]++;
	}
	x[2] = x[2] * x[1];
	return (x[2]);
}

int	main(int argc, char *argv[]) //main del 3
{
	argc = 2;
	printf("ft_atoi devuelve -> %i$\n", ft_atoi(argv[1]));
}