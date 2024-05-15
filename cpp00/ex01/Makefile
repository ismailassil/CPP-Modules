# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: musashi <musashi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 23:39:08 by musashi           #+#    #+#              #
#    Updated: 2024/04/07 23:44:15 by musashi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	c++
CPPFLAG	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

NAME	=	phonebook
SRC		=	main.cpp	class.hpp

all: $(NAME)

$(NAME):
	$(CPP) $(CPPFLAG) $(SRC) -o $@

clean:
	$(RM) $(NAME)

fclean:	clean	