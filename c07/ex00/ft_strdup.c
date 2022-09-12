/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:21:14 by paescano          #+#    #+#             */
/*   Updated: 2022/09/01 10:23:25 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		x;

	x = 0;
	str = malloc((ft_strlen(src) * sizeof(char)) + 1);
	if (str == 0)
		return (0);
	while (src[x] != '\0')
	{
		str[x] = src[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}

int	main(void) // main 00
{
	char	s1[50] = "soy eugenio, que tal?";

	printf("sistema -> %s$\n", strdup(s1));
	printf("la mia  -> %s$\n", ft_strdup(s1));
}
