NAME = megaphone
CPP = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CPP) $(CXXFLAGS) $< -c -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all
