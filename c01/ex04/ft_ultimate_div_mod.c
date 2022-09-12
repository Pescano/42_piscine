/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:16:46 by paescano          #+#    #+#             */
/*   Updated: 2022/08/15 16:28:59 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

int	main(void) //main del 4
{
	int	a;
	int	b;
	int *cociente;
	int *resto;
	char 	c;

	cociente = &a;
	resto = &b;
	c = '\n';
	a = 10;
	b = 5;
	ft_div_mod(cociente, resto);
	printf("%i", a);
	write(1, &c, 1);
	printf("%i", b);
}