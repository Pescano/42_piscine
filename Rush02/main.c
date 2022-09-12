/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:15:51 by paescano          #+#    #+#             */
/*   Updated: 2022/08/28 15:29:47 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	main(int argc, char **argv)
{
	int		input;
	char	*str;

	if (argc == 2 && ft_checker(argv[1]))
	{
		input = ft_atoi(argv[1]);
		str = ft_read_file("numbers.dict");
		ft_print(input, str);
		free(str);
	}
	else if (argc == 3 && ft_checker(argv[2]))
	{
		input = ft_atoi(argv[2]);
		str = ft_read_file(argv[1]);
		ft_print(input, str);
		free(str);
	}
	else
		ft_putstr("error");
	ft_putchar('\n');
	return (0);
}
