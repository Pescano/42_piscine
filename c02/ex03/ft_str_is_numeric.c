/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:18:06 by paescano          #+#    #+#             */
/*   Updated: 2022/08/16 12:25:40 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	x;

	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (*str >= '0' && *str <= '9')
				x = 1;
			else
				return (0);
			str++;
		}
	}
	return (x);
}
