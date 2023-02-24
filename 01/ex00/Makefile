# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: choihwiyong <marvin@42.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 19:02:39 by choihwiy          #+#    #+#              #
#    Updated: 2023/02/25 04:09:45 by choihwiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variable
NAME		= BraiiiiiiinnnzzzZ
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

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
clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all re fclean clean

