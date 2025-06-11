NAME = harl
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

VERDE	:= \033[0;32m
AMARELO	:= \033[0;33m
VERMELHO := \033[0;31m

SRC =	main.cpp \
	Harl.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "$(VERMELHO)Complicação feita com sucesso"

%.o: %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "$(VERMELHO)Objectos e executável limpos"

re: fclean all

.PHONY: all clean fclean re
