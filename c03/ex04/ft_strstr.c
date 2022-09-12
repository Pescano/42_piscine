/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:26:44 by paescano          #+#    #+#             */
/*   Updated: 2022/08/22 20:54:00 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x[2];

	x[0] = 0;
	x[1] = 0;
	if (to_find[x[1]] == '\0')
		return (str);
	while (str[x[0]] != '\0')
	{
		x[1] = 0;
		while (str[x[0] + x[1]] == to_find[x[1]] && str[x[0] + x[1]] != '\0')
			x[1]++;
		if (to_find[x[1]] == '\0')
			return (str + x[0]);
		x[0]++;
	}
	return (0);
}

int	main(void) // main 4
{
	char	s1[50] = "soy eugenio, que tal?";
	char	s2[10] = "hola";

	printf("sistema -> %s$\n", strstr(s1, s2));
	printf("la mia  -> %s$\n", ft_strstr(s1, s2));
}