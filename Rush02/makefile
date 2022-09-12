# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paescano <paescano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/27 11:44:04 by luclopez          #+#    #+#              #
#    Updated: 2022/08/28 20:34:03 by paescano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE_NAME = rush-02
DEFAULT_DICTIONARY = numbers.dict

$(FILE_NAME):
	@gcc -Wall -Wextra -Werror -o $(FILE_NAME) main.c checker.c ft_aux.c open_read.c ft_print.c ft_print2.c 

fclean:
	@find . -name $(FILE_NAME) -delete
	@find data -name *.dict -not -name $(DEFAULT_DICTIONARY) -delete
