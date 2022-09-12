/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:10:26 by paescano          #+#    #+#             */
/*   Updated: 2022/08/22 20:48:51 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] == s2[x]) && (s1[x] != '\0') && (s2[x] != '\0'))
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

int	main(void) // main 0
{
	char	s1[] = "hola";
	char	s2[] = "hola";

	printf("sistema -> %d$\n", strcmp(s1, s2));
	printf("la mia  -> %d$\n", ft_strcmp(s1, s2));
}
