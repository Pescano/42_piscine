/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:15:59 by paescano          #+#    #+#             */
/*   Updated: 2022/08/18 18:52:06 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	x;

	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (*str >= ' ')
				x = 1;
			else
				return (0);
			str++;
		}
	}
	return (x);
}
