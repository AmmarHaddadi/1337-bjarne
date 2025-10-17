NAME = app
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
SRC = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp
OBJS = $(SRC:.cpp=.o)
HDR = ./ClapTrap.hpp

all: $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(HDR)
	$(CPP) $(CXXFLAGS) $< -c -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all
