/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:06:11 by paescano          #+#    #+#             */
/*   Updated: 2022/08/25 11:04:09 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

int	ft_checker(char *base)
{
	int		x[3];

	x[0] = ft_strlen(base);
	x[1] = 0;
	if (base[0] == '\0' || x[0] == 1)
		return (0);
	while (x[1] < x[0])
	{
		if (base[x[1]] <= ' ' || base[x[1]] == 127)
			return (0);
		x[2] = x[1] + 1;
		while (x[2] < x[0])
		{
			if (base[x[2]] == base[x[1]] || base[x[1]] == '-'
				|| base[x[1]] == '+' || base[x[2]] == '-' || base[x[2]] == '+')
				return (0);
			x[2]++;
		}
		x[1]++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (ft_checker(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr >= len)
		{
			ft_putnbr_base(nbr / len, base);
			ft_putnbr_base(nbr % len, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}

int	main(void) //main  del 4
{
	char	str[] = "01";
	
	ft_putnbr_base(-7, str);
	return (0);
}