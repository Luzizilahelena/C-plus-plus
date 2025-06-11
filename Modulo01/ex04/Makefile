NAME = losers
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

VERDE	:= \033[0;32m
VERMELHO := \033[0;31m
AMARELO	:= \033[0;33m

SRC = checar.cpp \
      main.cpp \
      open.cpp \
      replace.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "$(AMARELO)Compilação completa😊️"

%.o: %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "$(VERDE)Objectos e executável excluídos😁️"

re: fclean all

.PHONY: all clean fclean re

