NAME = PhoneBook
CXX = c++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRC =	Contact.cpp \
	PhoneBook.cpp \
	main.cpp \
	truncate.cpp \
	comands.cpp \
	
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
