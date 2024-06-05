# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iassil <iassil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 18:28:04 by iassil            #+#    #+#              #
#    Updated: 2024/06/05 02:07:41 by iassil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	c++
CPP		+=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

NAME	=	account
SRC		=	Account.cpp		tests.cpp
OBJ		=	$(SRC:.cpp=.o)
HEADER	=	Account.hpp

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)[ ~ ] Compilation of the Objects files...$(RESET)"
	@$(CPP) $^ -o $@
	@echo "$(GREEN)[ ✓ ] Executable file Compiled Successfully!$(RESET)"

%.o: %.cpp $(HEADER)
	@$(CPP) -c $< -o $@

re: clean $(NAME)

clean:
	@echo "$(YELLOW)[ ~ ] Removing Object files $(RESET)"
	@$(RM) $(OBJ)
	@echo "$(GREEN)[ ✓ ] Object files removed successfully!$(RESET)"

fclean:	clean
	@echo "$(YELLOW)[ ~ ] Removing Executable...$(RESET)"
	@$(RM) $(NAME)
	@echo "$(GREEN)[ ✓ ] Executable files removed successfully!$(RESET)"

########## DFine ANSI escape codes for colors
GREEN=	\033[1;32m
YELLOW=	\033[33m
RESET=	\033[0m		# No Color
