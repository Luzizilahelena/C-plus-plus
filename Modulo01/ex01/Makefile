NAME = Moarbrainz!
CXX = c++
FLAGS = -Wall -Wextra  -Werror
RM = rm -rf

SRC =	main.cpp \
	Zombie.cpp \
	zombieHorde.cpp
	
OBJ = $(SRC:.cpp=.o)

all: 	$(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)
	
clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all fclean clean re
