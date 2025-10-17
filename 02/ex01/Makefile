NAME = app
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./main.cpp ./Fixed.cpp
OBJS = $(SRC:.cpp=.o)
HDR = ./Fixed.hpp

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
