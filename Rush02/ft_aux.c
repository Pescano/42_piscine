/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:39:08 by luclopez          #+#    #+#             */
/*   Updated: 2022/08/30 14:58:00 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

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

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

void	ft_print_str(char *dict, int position)
{
	while (dict[position] != '\n')
	{
		ft_putchar(dict[position]);
		position++;
	}
	ft_putchar(' ');
}
