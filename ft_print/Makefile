# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoka-re <acoka-re@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 16:11:02 by acoka-re          #+#    #+#              #
#    Updated: 2024/10/11 16:15:00 by acoka-re         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =
# Update

OBJS = $(SRCS:.c=.o)
# Update

cc = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)
# Update

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 
# Update

clean:
	rm -f $(OBJS)
# Update

fclean: clean
	rm -f $(NAME)
# Update

re: fclean $(NAME)
# Update

.PHONY:  all clean fclean re
# Update