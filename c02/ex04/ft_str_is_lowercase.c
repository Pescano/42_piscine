/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:37:26 by paescano          #+#    #+#             */
/*   Updated: 2022/08/16 12:49:54 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	x;

	if (*str == '\0')
		return (1);
	else
	{
		while (*str != '\0')
		{
			if (*str >= 'a' && *str <= 'z')
				x = 1;
			else
				return (0);
			str++;
		}
	}
	return (x);
}
