/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:52:39 by paescano          #+#    #+#             */
/*   Updated: 2022/08/18 18:24:39 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = str[x] - 32;
		x++;
	}
	return (str);
}

int	main(void)//main del 7
{
	char	cadena[4] = "hola";

	ft_strupcase(cadena);
	write(1, &cadena[0], 1);
	write(1, &cadena[1], 1);
	write(1, &cadena[2], 1);
	write(1, &cadena[3], 1);
}