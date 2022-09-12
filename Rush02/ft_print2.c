/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 20:27:09 by paescano          #+#    #+#             */
/*   Updated: 2022/08/28 20:27:33 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_print_tens(int x, char *str, char *dict, int number)
{
	str[x - 1] = number % 10 + 48;
	str[x - 2] = number / 10 + 48;
	if (number <= 10 || number >= 20)
	{
		if (str[x - 1] == '0')
		{
			str[x - 1] = 48;
			ft_find_tens(str, dict);
		}
		else
		{
			str[x - 1] = 48;
			ft_find_tens(str, dict);
			str[x - 1] = number % 10 + 48;
			ft_find_units(str[1], dict);
		}
	}
	else
		ft_find_tens(str, dict);
}

void	ft_print_hundred(int x, char *str, char *dict, int number)
{
	int		i;
	char	tens[2];

	i = number / 100;
	str[x - 1] = '0';
	str[x - 2] = '0';
	str[x - 3] = ((number / 100) / i) + 48;
	ft_find_units(i + '0', dict);
	ft_find_hundred(str, dict);
	tens[1] = number % 10 + 48;
	tens[0] = ((number % 100) / 10) + 48;
	number = number % 100;
	ft_print_tens(x - 1, str, dict, number);
}

void	ft_print(int number, char *dict)
{
	char	*str;
	int		x;

	x = ft_count_digits(number);
	str = malloc(ft_count_digits(number) * sizeof(char));
	if (x == 3)
		ft_print_hundred(x, str, dict, number);
	if (x == 2)
		ft_print_tens(x, str, dict, number);
	if (x == 1 || x == 0)
		ft_print_units(x, str, dict, number);
	free(str);
}
