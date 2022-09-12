/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:24:02 by paescano          #+#    #+#             */
/*   Updated: 2022/08/18 18:51:18 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int	main(void)//main del 0
{
	char	cadena[4] = "hola";
	char	copia[4];

	ft_strcpy(copia, cadena);
	write(1, &copia[0], 1);
	write(1, &copia[1], 1);
	write(1, &copia[2], 1);
	write(1, &copia[3], 1);
}