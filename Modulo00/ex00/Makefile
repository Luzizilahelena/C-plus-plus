NAME = megaphone
COMP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

VERDE	:= \033[0;32m
AMARELO	:= \033[0;33m
VERMELHO := \033[0;31m

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)
	@echo "$(VERDE)Compilação completa."
	@echo "$(VERMELHO)Muito bem cadete😁️"

%.o: %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "$(VERMELHO)Objectos e executável limpos com sucesso💯️"

re: fclean all
