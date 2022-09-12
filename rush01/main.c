/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:28:44 by paescano          #+#    #+#             */
/*   Updated: 2022/08/21 20:24:05 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(char *str);

int	main(int argc, char *argv[])
{
	if (argc == 2)
		rush(argv[1]);
	else
		write(2, "Error\n", 6);
	return (0);
}
