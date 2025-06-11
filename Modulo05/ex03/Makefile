# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 12:49:50 by lnzila            #+#    #+#              #
#    Updated: 2025/05/27 09:46:38 by lnzila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC =	main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		Intern.cpp

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