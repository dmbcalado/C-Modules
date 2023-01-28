# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 17:48:38 by dmendonc          #+#    #+#              #
#    Updated: 2023/01/28 17:56:21 by dmendonc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GPP = c++

NAME = Harl

SRCS = main.cpp \
       Harl.cpp

OBJS = $(SRCS: .cpp = .o)

CPPFLAGS = -g -Wall -Wextra -Werror -fsanitize=address -std=c++98

all :	$(NAME)

$(NAME): $(OBJS)
	@$(GPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo	"\033[102m\033[1mHarl 2.0 created\033[0m"

clean :
	@rm -rf *.o
	@echo	"Object Files Deleted"

fclean :	clean
	@rm -rf $(NAME)
	@echo	"\033[101m\033[1mHarl 2.0 deleted\033[0m"

re :	fclean all

.PHONY :	all clean fclean re bonus