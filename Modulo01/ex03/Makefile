NAME =	weapon
CXX = c++
FLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC =	main.cpp	\
	Weapon.cpp	\
	HumanA.cpp	\
	HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@
	
$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHYONE: all clean fclean re
