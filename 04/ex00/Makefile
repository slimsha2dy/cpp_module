# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwichoi <hwichoi@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 18:03:23 by hwichoi           #+#    #+#              #
#    Updated: 2023/04/29 19:59:30 by hwichoi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variable
NAME		= Animal
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

# srcs
SRCS = main.cpp \
		Animal.cpp \
		WrongAnimal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongCat.cpp
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