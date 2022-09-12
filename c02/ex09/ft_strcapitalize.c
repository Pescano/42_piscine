/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:07:44 by paescano          #+#    #+#             */
/*   Updated: 2022/08/17 11:20:39 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] + 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if (!(str[x - 1] >= '0' && str[x - 1] <= '9')
			&& !(str[x - 1] >= 'a' && str[x - 1] <= 'z')
			&& !(str[x - 1] >= 'A' && str[x - 1] <= 'Z'))
		{
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
