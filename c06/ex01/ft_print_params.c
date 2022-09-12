/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:57:10 by paescano          #+#    #+#             */
/*   Updated: 2022/08/25 13:00:47 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	x[2];

	x[0] = 1;
	while (x[0] < argc)
	{
		x[1] = 0;
		while (argv[x[0]][x[1]] != '\0')
		{
			write(1, &argv[x[0]][x[1]], 1);
			x[1]++;
		}
		write(1, "\n", 1);
		x[0]++;
	}
}