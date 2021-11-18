FILES = megaphone.cpp
OFILES = $(patsubst %.cpp,%.o,$(FILES))
CC = clang++
NAME = megaphone
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
