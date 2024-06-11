# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iassil <iassil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 05:37:36 by iassil            #+#    #+#              #
#    Updated: 2024/06/11 15:23:41 by iassil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	c++
CPP		+=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
RM		=	rm -f

NAME	=	diamondtrap
SRC		=	ClapTrap.cpp	DiamonTrap.cpp	FragTrap.cpp	ScavTrap.cpp	main.cpp
HEADER	=	ClapTrap.hpp	DiamonTrap.hpp	FragTrap.hpp	ScavTrap.hpp
OBJ		=	$(SRC:.cpp=.o)

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
