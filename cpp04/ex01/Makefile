NAME = animal

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp 

HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

watch-valgrind:
	find . -name "*.cpp" -o -name "*.hpp" | entr -r sh -c 'clear && make re > /tmp/make.log 2>&1 && valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) || cat /tmp/make.log'

watch:
	find . -name "*.cpp" -o -name "*.hpp" | entr -r sh -c 'clear && make re > /tmp/make.log 2>&1 && ./$(NAME) || cat /tmp/make.log'

.PHONY: all clean fclean re watch
