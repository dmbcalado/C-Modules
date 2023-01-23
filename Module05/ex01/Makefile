NAME = fixed

SRCS =	main.cpp		\
		Bureaucrat.cpp		\

OBJS = $(SRCS:.c=.o)

CPPFLAGS = -g -fsanitize=address -Wall -Wextra -Werror

all	:	$(NAME)


$(NAME)	:	$(OBJS)
	@c++ -o $(NAME) $(OBJS) $(CFLAGS)

%.o	:	%.c
	@c++ $(CPPFLAGS)  -c $^ -I./ -o $@ 
	

clean	:
	@rm -f $(OBJS)
		
fclean	:	clean
	@rm -f $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re bonus