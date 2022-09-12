/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:37:10 by paescano          #+#    #+#             */
/*   Updated: 2022/08/22 20:40:03 by paescano         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	x[2];

	x[0] = ft_strlen(dest);
	x[1] = 0;
	while (src[x[1]] != '\0')
	{
		dest[x[0] + x[1]] = src[x[1]];
		x[1]++;
	}
	dest[x[0] + x[1]] = '\0';
	return (x[0] + x[1] - 1);
}

int	main(void) // main 5
{
	char	s1[50] = "soy eugenio, que tal?";
	char	s2[10] = "tal";

	printf("sistema -> %lu$\n", strlcat(s1, s2, 2));
	printf("la mia  -> %u$\n", ft_strlcat(s1, s2, 2));
	printf("El string  -> %s$\n", s1);
}
