NAME = serializer
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror 
RM = rm -rf

SRC = main.cpp\
	Serializer.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o:%.cpp
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@
	@echo "Meu programa compilado"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	@echo "Objectos e executável limpos"

re: fclean all
