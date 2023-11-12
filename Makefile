# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 19:59:51 by iqattami          #+#    #+#              #
#    Updated: 2023/11/11 12:47:58 by iqattami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS =main.c  ft_atoi.c ft_substr.c\
ft_bzero.c ft_strdup.c ft_tolower.c\
ft_calloc.c  ft_strjoin.c ft_toupper.c\
ft_isalnum.c ft_memchr.c ft_strlcat.c\
ft_isalpha.c ft_memcmp.c ft_strlcpy.c\
ft_isascii.c ft_memcpy.c ft_strlen.c ft_strmapi.c\
ft_isdigit.c ft_memmove.c  ft_strtrim.c\
ft_isprint.c ft_memset.c ft_strncmp.c ft_split.c\
ft_putnbr_fd.c  ft_strnstr.c ft_strchr.c ft_strrchr.c\
ft_itoi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_striteri.c\

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all

