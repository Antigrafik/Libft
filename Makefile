# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmurgia- <mmurgia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 15:46:49 by mmurgia-          #+#    #+#              #
#    Updated: 2022/04/28 13:42:23 by mmurgia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c

OBJECTS = $(SRCS:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SRCS)
	gcc $(CFLAGS) -c $(SRCS)

$(OBJ_BONUS): $(SRCS) $(SRC_BONUS)
	gcc $(CFLAGS) -c $(SRCS) $(SRC_BONUS)

bonus: $(OBJECTS) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJECTS) $(OBJ_BONUS)

clean:
	@rm -f $(OBJECTS) $(OBJ_BONUS)

fclean: clean
	@rm -f $(OBJECTS) $(OBJ_BONUS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
