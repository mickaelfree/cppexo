NAME = phonebook 

C = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Phonebook.cpp main.cpp Contact.cpp
HEADERS = Phonebook.hpp Contact.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(CFLAGS) $(OBJS)  -o $(NAME) 

%.o: %.cpp $(HEADERS)
	$(C) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
