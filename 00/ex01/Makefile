# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slimsha2dy <marvin@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 14:52:34 by slimsha2          #+#    #+#              #
#    Updated: 2023/02/20 18:28:00 by monkeyki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Contact.cpp PhoneBook.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)

CC		= c++
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	= PhoneBook

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all re fclean clean
