# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/28 21:20:04 by lnzila            #+#    #+#              #
#    Updated: 2025/05/29 08:35:12 by lnzila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror 
RM = rm -rf

VERDE	:= \033[0;32m
AMARELO	:= \033[0;33m
VERME	:= \033[0;31m

SRC = main.cpp\
	ScalarConvert.cpp\
	Literal.cpp\
	Print.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)
	@echo "$(VERDE) compilacao concluida!"

%.o:%.cpp
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "$(VERME)Objectos e executável limpados"

re: fclean all
