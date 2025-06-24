# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 14:00:50 by lnzila            #+#    #+#              #
#    Updated: 2025/04/30 14:09:28 by lnzila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

VERDE	:= \033[0;32m
AZUL	:= \033[0;34m
AMARELO := \033[0;33m
NEGRITO	:= \033[1m

SRC =	main.cpp \
		ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(COMP) $(FLAGS) -c $<  -o $@

$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@
	@echo "$(AZUL)Compilação concluída"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "$(VERDE)Tudo excluído"

re: fclean all
