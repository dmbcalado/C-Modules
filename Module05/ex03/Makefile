# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 15:01:42 by ratinhosujo       #+#    #+#              #
#    Updated: 2023/02/16 17:45:19 by ratinhosujo      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GPP = c++

NAME = intern

SRCS = main.cpp \
       AForm.cpp \
       Intern.cpp \
       Bureaucrat.cpp \
       RobotomyRequestForm.cpp \
	   ShrubberyCreationForm.cpp \
       PresidentialPardonForm.cpp \

OBJS = $(SRCS: .cpp = .o)

CPPFLAGS = -g -Wall -Wextra -Werror -fsanitize=address -std=c++98

all :	$(NAME)

$(NAME): $(OBJS)
	@$(GPP) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo	"\033[102m\033[1mintern created\033[0m"

clean :
	@rm -rf *.o
	@echo	"Object Files Deleted"

fclean :	clean
	@rm -rf $(NAME)
	@echo	"\033[101m\033[1mintern deleted\033[0m"

re :	fclean all

.PHONY :	all clean fclean re bonus