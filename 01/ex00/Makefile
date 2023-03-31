# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 19:02:39 by choihwiy          #+#    #+#              #
#    Updated: 2023/03/31 20:15:48 by hwichoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variable
NAME		= BraiiiiiiinnnzzzZ
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
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
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(DEL) $(OBJS)

fclean : clean
	$(DEL) $(NAME)

re : fclean all

.PHONY : all re fclean clean

