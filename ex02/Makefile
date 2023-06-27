# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psuanpro <psuanpro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 15:23:55 by psuanpro          #+#    #+#              #
#    Updated: 2023/06/28 02:09:52 by psuanpro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=StartwithAFewFunctions
CC=g++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98

SRCS= main.cpp

OBJS=${SRCS:.cpp=.o}

BRED =\033[1;31m
BGRN =\033[1;32m
BYEL =\033[1;33m
RES = \033[0m

COMPILE = echo "$(BGRN)$(NAME) compiled....$(RES)"
CLEAN = echo "$(BYEL)$(NAME) clean....$(RES)"
FCLEAN = echo "$(BRED)$(NAME) fclean....$(RES)"

.cpp.o:
	@$(CC) -g $(CPPFLAGS) -c $< -o $@

all:$(NAME)

$(NAME):$(OBJS)
	@$(CC) -g $(CPPFLAGS) $(OBJS) -o $@
	@$(COMPILE)

clean:
	@rm -rf $(OBJS)
	@$(CLEAN)

fclean: clean
	@rm -rf $(NAME)
	@$(FCLEAN)

re: fclean all
.PHONY: all re clean fclean
