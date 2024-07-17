# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iassil <iassil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 05:37:36 by iassil            #+#    #+#              #
#    Updated: 2024/07/14 23:02:08 by iassil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP		=	c++
CPP		+=	-Wall -Wextra -Werror -std=c++98 -Wshadow
RM		=	rm -f

NAME	=	animal
SRC		=	Animal.cpp		Dog.cpp				WrongCat.cpp	Brain.cpp	\
			Cat.cpp			WrongAnimal.cpp		main.cpp
HEADER	=	Animal.hpp		Dog.hpp				WrongCat.hpp	Brain.hpp	\
			Cat.hpp			WrongAnimal.hpp		main.hpp
OBJ		=	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)[ ~ ] Compilation of the Objects files...$(RESET)"
	@$(CPP) $^ -o $@
	@echo "$(GREEN)[ ✓ ] Executable file Compiled Successfully!$(RESET)"

main.o: main.cpp main.hpp
	@$(CPP) -c $< -o $@

Animal.o: Animal.cpp Animal.hpp
	@$(CPP) -c $< -o $@

Cat.o: Cat.cpp Cat.hpp Brain.hpp Animal.hpp
	@$(CPP) -c $< -o $@

Dog.o: Dog.cpp Dog.hpp Brain.hpp Animal.hpp
	@$(CPP) -c $< -o $@

Brain.o: Brain.cpp Brain.hpp Animal.hpp
	@$(CPP) -c $< -o $@

WrongAnimal.o: WrongAnimal.cpp WrongAnimal.hpp
	@$(CPP) -c $< -o $@

WrongCat.o: WrongCat.cpp WrongCat.hpp WrongAnimal.hpp
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
