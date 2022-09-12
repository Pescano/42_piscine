/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:52:36 by paescano          #+#    #+#             */
/*   Updated: 2022/08/15 20:29:08 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;	
	int	c;
	int	*tabi;
	int	*tabf;

	n = 0;
	tabi = tab;
	tabf = tab + (size - 1);
	while (n < (size / 2))
	{
		c = *tabi;
		*tabi = *tabf;
		*tabf = c;
		n++;
		tabi++;
		tabf--;
	}
}
