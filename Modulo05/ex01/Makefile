# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 08:27:01 by lnzila            #+#    #+#              #
#    Updated: 2025/05/27 10:56:54 by lnzila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC =	main.cpp \
		Form.cpp \
		Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o: %.cpp
		$(COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
		$(COMP) $(FLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
