# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnzila <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/07 16:04:41 by lnzila            #+#    #+#              #
#    Updated: 2025/06/07 16:11:33 by lnzila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = base
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror 
RM = rm -rf

SRC = main.cpp\
	Base.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o:%.cpp
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@
	@echo "Meu programa compilado"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "Objectos e executável limapdos"

re: fclean all

