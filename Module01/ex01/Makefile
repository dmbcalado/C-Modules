# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 21:45:25 by ratinhosujo       #+#    #+#              #
#    Updated: 2023/01/26 14:34:56 by dmendonc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GPP = c++

NAME = Zombie

SRCS = Zombie.cpp \
       zombieHorde.cpp \
       main.cpp

OBJS = $(SRCS: .cpp = .o)

CPPFLAGS = -g -Wall -Wextra -Werror -fsanitize=address -std=c++98

all :	$(NAME)

$(NAME): $(OBJS)
	@$(GPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo	"\033[102m\033[1mZombie created\033[0m"

clean :
	@rm -rf *.o
	@echo	"Object Files Deleted"

fclean :	clean
	@rm -rf $(NAME)
	@echo	"\033[101m\033[1mZombie deleted\033[0m"

re :	fclean all

.PHONY :	all clean fclean re bonus