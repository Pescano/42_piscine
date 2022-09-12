/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FT_LIB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paescano <paescano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:09:42 by paescano          #+#    #+#             */
/*   Updated: 2022/08/28 20:26:24 by paescano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include	<stdlib.h>
# include	<fcntl.h>
# include	<unistd.h>
# include	<stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print(int input, char *str);
void	ft_find_units(char c, char *dict);
void	ft_print_str(char *dict, int position);
void	ft_find_tens(char *str, char *dict);
void	ft_find_hundred(char *str, char *dict);
void	ft_print_tens(int x, char *str, char *dict, int number);
void	ft_print_units(int x, char *str, char *dict, int number);
void	ft_print_hundred(int x, char *str, char *dict, int number);
int		ft_checker(char *str);
int		ft_get_size_dict(char *file_dict);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_count_digits(int number);
char	*ft_read_file(char *file_dict);

#endif