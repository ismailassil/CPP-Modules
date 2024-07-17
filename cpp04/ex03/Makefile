# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iassil <iassil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 05:37:36 by iassil            #+#    #+#              #
#    Updated: 2024/07/14 23:09:24 by iassil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	c++
CPP		+=	-Wall -Wextra -Werror -std=c++98 -Wshadow
RM		=	rm -f

NAME	=	amateria
SRC		=	AMateria.cpp		Cure.cpp			MateriaSource.cpp	\
			Character.cpp		Ice.cpp				main.cpp
HEADER	=	AMateria.hpp		ICharacter.hpp		MateriaSource.hpp	\
			Character.hpp		IMateriaSource.hpp	main.hpp			\
			Cure.hpp			Ice.hpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)[ ~ ] Compilation of the Objects files...$(RESET)"
	@$(CPP) $^ -o $@
	@echo "$(GREEN)[ ✓ ] Executable file Compiled Successfully!$(RESET)"

main.o: main.cpp main.hpp
	$(CPP) -c $< -o $@

AMateria.o: AMateria.cpp AMateria.hpp ICharacter.hpp
	$(CPP) -c $< -o $@

Character.o: Character.cpp Character.hpp AMateria.hpp ICharacter.hpp
	$(CPP) -c $< -o $@

Cure.o: Cure.cpp Cure.hpp AMateria.hpp
	$(CPP) -c $< -o $@

Ice.o: Ice.cpp Ice.hpp AMateria.hpp
	$(CPP) -c $< -o $@

MateriaSource.o: MateriaSource.cpp MateriaSource.hpp IMateriaSource.hpp AMateria.hpp
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
