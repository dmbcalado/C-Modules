NAME = phonebook

SRCS =	phonebook.cpp	\
		pnbook_aux.cpp	\
		getters.cpp		\
		main.cpp

OBJS = $(SRCS:.c=.o)

CPPFLAGS = -g -fsanitize=address -Wall -Wextra -Werror

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