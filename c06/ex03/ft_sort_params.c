/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:36:27 by paescano          #+#    #+#             */
/*   Updated: 2022/08/25 17:09:36 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] != '\0') && (s2[x] != '\0'))
	{
		if (s1[x] > s2[x] || s1[x] < s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(int argc, char *argv[])
{
	int	x[2];

	x[0] = 1;
	while (x[0] < argc)
	{
		x[1] = x[0] + 1;
		while (x[1] < argc)
		{
			if (ft_strcmp(argv[x[0]], argv[x[1]]) > 0)
				ft_swap(&argv[x[0]], &argv[x[1]]);
			x[1]++;
		}
		x[0]++;
	}
	x[0] = 1;
	while (x[0] < argc)
	{
		ft_putstr(argv[x[0]]);
		write(1, "\n", 1);
		x[0]++;
	}
}
