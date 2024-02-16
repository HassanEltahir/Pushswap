# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haeltahi <haeltahi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by ncolomer          #+#    #+#              #
#    Updated: 2023/07/19 16:46:56 by haeltahi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =ft_bzero.c  ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c  ft_memcpy.c \
	ft_memmove.c ft_memset.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c  ft_tolower.c ft_toupper.c ft_memcmp.c  \
	ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_strnstr.c \
ft_memchr.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c  \
ft_itoa.c \
ft_striteri.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
	
OBJ = $(SRCS:.c=.o)

BNS_OBJ = $(BNS_SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEADER = ./libft.h

all : $(NAME)


# %.o: %.c
# 	cc -c $< -o $@

$(NAME) :	$(OBJ) $(HEADER)
			ar -rcs $(NAME) $(OBJ)

clean: 
		rm -f $(OBJ) $(BNS_OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(BNS_OBJ) $(HEADER)
		ar -rcs $(NAME) $(OBJ) $(BNS_OBJ)

.PHONY: clean fclean all re