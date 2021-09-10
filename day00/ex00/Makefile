FILES   =   megaphone.cpp
OFILES  =   $(patsubst %.cpp,%.o,$(FILES))
FLAGS   =  	clang++ -Wall -Werror -Wextra
NAME    =   megaphone
HEADER  =   philo.h

all: $(NAME)

$(NAME):    $(OFILES)
				$(FLAGS) $(OFILES) -o $(NAME)
%.o:        %.c $(HEADER) Makefile
				$(FLAGS) -c $<
clean:
			rm -f $(OFILES)
fclean:     clean
			rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
