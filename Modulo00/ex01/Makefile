NAME = PhoneBook
COMP = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

VERDE	:= \033[0;32m
VERMELHO := \033[0;31m
AMARELO	:= \033[0;33m

SRC =	Contact.cpp \
	PhoneBook.cpp \
	main.cpp \
	truncate.cpp \
	comands.cpp \
	
OBJ= $(SRC:.cpp=.o)

all: $(NAME)
	@echo "$(AMARELO)Compilação feita com sucesso💪️"

%.o: %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)
	@echo "$(AMARELO)Objectos e executável limpos"
	
re: fclean all
