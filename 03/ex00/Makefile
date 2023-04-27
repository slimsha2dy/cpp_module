# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 18:57:17 by hwichoi           #+#    #+#              #
#    Updated: 2023/04/27 18:57:44 by hwichoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variable
NAME		= ClapTrap
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

# srcs
SRCS = main.cpp \
	   ClapTrap.cpp
OBJS = $(SRCS:.cpp=.o)

# rules
all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all re fclean clean
