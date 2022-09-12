/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:29:00 by paescano          #+#    #+#             */
/*   Updated: 2022/08/28 13:30:55 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_get_size_dict(char *file_dict)
{
	int		open_dict;
	int		size;
	char	*buffer;

	size = 0;
	open_dict = open(file_dict, O_RDONLY);
	buffer = malloc(sizeof(char));
	while (read(open_dict, buffer, 1))
		size++;
	free(buffer);
	return (size);
}

char	*ft_read_file(char *file_dict)
{
	int		open_dict;
	int		file_size;
	char	*buffer;

	open_dict = open(file_dict, O_RDONLY);
	file_size = ft_get_size_dict(file_dict);
	buffer = malloc((file_size + 1) * sizeof(char));
	if (buffer == NULL || read(open_dict, buffer, file_size) == -1)
	{
		ft_putstr("Dict Error");
		return (NULL);
	}
	buffer[file_size] = '\0';
	return (buffer);
}
