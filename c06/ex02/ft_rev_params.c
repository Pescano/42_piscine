/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:32:15 by paescano          #+#    #+#             */
/*   Updated: 2022/08/25 16:33:34 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	x[2];

	x[0] = argc - 1;
	while (x[0] > 0)
	{
		x[1] = 0;
		while (argv[x[0]][x[1]] != '\0')
		{
			write(1, &argv[x[0]][x[1]], 1);
			x[1]++;
		}
		write(1, "\n", 1);
		x[0]--;
	}
}
