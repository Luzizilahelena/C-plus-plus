NAME = losers
CXX = c++
FLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRC = checar.cpp \
      main.cpp \
      open.cpp \
      replace.cpp

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

.PHONY: all clean fclean re

