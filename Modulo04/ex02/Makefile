NAME = abstrata
COMP = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC =	main.cpp \
		AAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o: %.cpp
	$(COMP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(COMP) $(FLAGS) $(OBJ) -o $@

clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
