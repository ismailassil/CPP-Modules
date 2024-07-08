# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iassil <iassil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/05 06:21:40 by iassil            #+#    #+#              #
#    Updated: 2024/07/08 19:01:46 by iassil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	c++
CPP		+=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

NAME	=	main
SRC		=	HumanA.cpp		HumanB.cpp		Weapon.cpp		main.cpp
HEADER	=	HumanA.hpp		HumanB.hpp		Weapon.hpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)[ ~ ] Compilation of the Objects files...$(RESET)"
	$(CPP) $^ -o $@
	@echo "$(GREEN)[ ✓ ] Executable file Compiled Successfully!$(RESET)"

main.o: main.cpp $(HEADER)
	$(CPP) -c $< -o $@

HumanA.o: HumanA.cpp HumanA.hpp
	$(CPP) -c $< -o $@

HumanB.o: HumanB.cpp HumanB.hpp
	$(CPP) -c $< -o $@

Weapon.o: Weapon.cpp Weapon.hpp
	$(CPP) -c $< -o $@

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
