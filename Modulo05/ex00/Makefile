NAME = bureaucrat
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

VERDE	:= \033[0;32m
AZUL	:= \033[0;34m
AMARELO := \033[0;33m
NEGRITO	:= \033[1m

SRC =	main.cpp \
		Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o: %.cpp
		$(COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
		$(COMP) $(FLAGS) $(OBJ) -o $@
		@echo "$(AMARELO)Compilação concluída"	

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "$(AZUL)Tudo excluído"

re: fclean all
