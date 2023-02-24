# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 19:02:39 by choihwiy          #+#    #+#              #
#    Updated: 2023/02/24 19:03:03 by choihwiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable
NAME		= BraiiiiiiinnnzzzZ
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
DEL			= rm -rf

# srcs
SRCS = newZombie.cpp \
	   main.cpp \
	   randomChump.cpp \
	   Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

# rules
all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
clean : 
	$(DEL) $(OBJS)

fclean : clean
	$(DEL) $(NAME)

re : fclean all

.PHONY : all re fclean clean

