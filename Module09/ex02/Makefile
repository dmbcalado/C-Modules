# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 15:01:42 by ratinhosujo       #+#    #+#              #
#    Updated: 2023/02/27 19:58:28 by ratinhosujo      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GPP = c++

NAME = PmergeMe

SRCS = main.cpp \
       PMergeMe.cpp

OBJS = $(SRCS: .cpp = .o)

CPPFLAGS = -g -Wall -Wextra -Werror -fsanitize=address -std=c++98

all :	$(NAME)

$(NAME): $(OBJS)
	@$(GPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo	"\033[102m\033[1mRPN created.\033[0m"

clean :
	@rm -rf *.o

fclean :	clean
	@rm -rf $(NAME)
	@echo	"\033[101m\033[1mRPN deleted.\033[0m"

re :	fclean all

.PHONY :	all clean fclean re bonus