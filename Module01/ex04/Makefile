# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 16:42:58 by ratinhosujo       #+#    #+#              #
#    Updated: 2023/01/28 16:38:02 by dmendonc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GPP = c++

NAME = sed

SRCS = main.cpp

OBJS = $(SRCS: .cpp = .o)

CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98

all :	$(NAME)

$(NAME): $(OBJS)
	@$(GPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo	"\033[102m\033[1mSed created\033[0m"

clean :
	@rm -rf *.o
	@echo	"Object Files Deleted"

fclean :	clean
	@rm -rf $(NAME)
	@echo	"\033[101m\033[1mSed deleted\033[0m"

re :	fclean all

.PHONY :	all clean fclean re bonus