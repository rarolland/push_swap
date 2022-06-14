# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarollan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/10 14:07:56 by rarollan          #+#    #+#              #
#    Updated: 2022/06/10 14:22:05 by rarollan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 	=

OBJ		=	$(SRC:.c=.o)

CC 		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Werror -Wextra

NAME	=	push_swap

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:     clean
            $(RM) $(NAME)

re:         fclean $(NAME)

.PHONY:     all clean fclean re
