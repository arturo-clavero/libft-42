# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arturo <arturo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 04:46:51 by artclave          #+#    #+#              #
#    Updated: 2024/06/19 18:24:25 by arturo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes

SRC = srcs/char_check/ft_isalnum.c srcs/char_check/ft_isalpha.c srcs/char_check/ft_isascii.c \
      srcs/char_check/ft_isdigit.c srcs/char_check/ft_isprint.c \
      srcs/conversion/ft_atoi.c srcs/conversion/ft_itoa.c srcs/conversion/ft_tolower.c \
      srcs/conversion/ft_toupper.c \
      srcs/linked_list/ft_lstadd_back.c srcs/linked_list/ft_lstadd_front.c \
      srcs/linked_list/ft_lstclear.c srcs/linked_list/ft_lstdelone.c \
      srcs/linked_list/ft_lstiter.c srcs/linked_list/ft_lstlast.c \
      srcs/linked_list/ft_lstmap.c srcs/linked_list/ft_lstnew.c \
      srcs/linked_list/ft_lstsize.c \
      srcs/memory/ft_bzero.c srcs/memory/ft_calloc.c srcs/memory/ft_memchr.c \
      srcs/memory/ft_memcmp.c srcs/memory/ft_memcpy.c srcs/memory/ft_memmove.c \
      srcs/memory/ft_memset.c \
      srcs/string/ft_split.c srcs/string/ft_strchr.c srcs/string/ft_strdup.c \
      srcs/string/ft_striteri.c srcs/string/ft_strjoin.c srcs/string/ft_strlcat.c \
      srcs/string/ft_strlcpy.c srcs/string/ft_strlen.c srcs/string/ft_strmapi.c \
      srcs/string/ft_strncmp.c srcs/string/ft_strnstr.c srcs/string/ft_strrchr.c \
      srcs/string/ft_strtrim.c srcs/string/ft_substr.c \
      srcs/write/ft_putchar_fd.c srcs/write/ft_putendl_fd.c srcs/write/ft_putnbr_fd.c \
      srcs/write/ft_putstr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
