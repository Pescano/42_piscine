/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:29:05 by paescano          #+#    #+#             */
/*   Updated: 2022/08/22 20:52:58 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x[2];

	x[0] = ft_strlen(dest);
	x[1] = 0;
	while (src[x[1]] != '\0' && x[1] < nb)
	{
		dest[x[0] + x[1]] = src[x[1]];
		x[1]++;
	}
	dest[x[0] + x[1]] = '\0';
	return (dest);
}

int	main(void) // main 3
{
	char	s1[20] = "cadena";
	char	s2[10] = "hola";
	char	s3[20] = "cadena";
	char	s4[10] = "hola";

	strncat(s1, s2, 3);
	ft_strncat(s3, s4, 3);
	printf("sistema -> %s$\n", s1);
	printf("la mia  -> %s$\n", s3);
}
