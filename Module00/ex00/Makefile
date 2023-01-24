# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 19:25:02 by ratinhosujo       #+#    #+#              #
#    Updated: 2023/01/24 20:03:24 by ratinhosujo      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GPP = c++

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS: .cpp = .o)

CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98

all :	$(NAME)

$(NAME): $(OBJS)
	@$(GPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo	"\033[102m\033[1mmegaphone created\033[0m"

clean :
	@rm -rf *.o
	@echo	"Object Files Deleted"

fclean :	clean
	@rm -rf $(NAME)
	@echo	"\033[101m\033[1mmegaphone deleted\033[0m"

re :	fclean all

.PHONY :	all clean fclean re bonus