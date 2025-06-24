# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/14 12:19:52 by lnzila            #+#    #+#              #
#    Updated: 2025/04/21 08:02:13 by lnzila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fixed
COMP = c++ -std=c++98
Flags = -Wall -Wextra - Werror
RM = rm -rf

VERDE	:= \033[0;32m
AZUL	:= \033[0;34m
AMARELO := \033[0;33m
NEGRITO	:= \033[1m

SRC =	main.cpp \
		Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@
	@echo "$(AZUL)Compilação concluída"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "$(VERDE)Tudo excluído"

re: fclean all

.PHONY: all clean fclean re
