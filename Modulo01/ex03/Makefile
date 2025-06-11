NAME =	weapon
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

VERDE	:= \033[0;32m
VERMELHO := \033[0;31m
AMARELO := \033[0;33m

SRC =	main.cpp	\
	Weapon.cpp	\
	HumanA.cpp	\
	HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
	@echo "$(VERDE)Compilação completa"

%.o: %.cpp
	$(COMP) $(FLAGS) -c $< -o $@
	
$(NAME): $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "$(VERMELHO)Objectos e executável excluídos"
	
re: fclean all

.PHYONE: all clean fclean re
