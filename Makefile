# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: artclave <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 04:46:51 by artclave          #+#    #+#              #
#    Updated: 2023/10/04 23:12:00 by artclave         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memmove.c ft_strmapi.c ft_split.c
BONUS_SRC= ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c ft_lstmap.c

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

$(NAME) : $(OBJS)
	ar rcs $@ $^

bonus: $(BONUS_OBJS)
	ar -rcs $(NAME) $(BONUS_OBJS)

$(BONUS_OBJS): $(BONUS_SRC)
	$(CC) $(CFLAGS) -c $(BONUS_SRC)

cleantxt:
	$(RM) *.txt
clean: 
	$(RM) $(OBJS) $(BONUS_OBJS) *.txt a.out

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
