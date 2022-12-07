NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.c=.o)

CPPFLAGS = -Wall -Wextra -Werror

all	:	$(NAME)


$(NAME)	:	$(OBJS)
	@c++ -o $(NAME) $(OBJS) $(CFLAGS)

%.o	:	%.c
	@c++ $(CPPFLAGS)  -c $^ -I./ -o $@ 
	

clean	:
	@rm -f $(OBJS)
	@echo	""
	@echo	"$$ Object Files Deleted"
	@echo	""
		
fclean	:	clean
	@rm -f $(NAME)
	@echo	""
	@echo	"$$ ./minishell Deleted"
	@echo	""

re			:	fclean all

.PHONY		:	all clean fclean re bonus