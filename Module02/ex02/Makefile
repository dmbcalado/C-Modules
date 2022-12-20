NAME = fixed

CPPFLAGS = -Wall -Werror -Wextra -Fsanitize=address
RM = rm -f

SRCS =	Fixed.cpp		\
			Overload.cpp	\
			main.cpp

OBJECTS = $(SOURCES:.cpp=.o)


all : $(NAME)

$(NAME):
	g++ $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(OBJECTS)
fclean: clean
		$(RM) $(NAME)
		
re: fclean $(NAME)

rebonus:	fclean all
.PHONY:		all clean fclean re