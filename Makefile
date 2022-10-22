# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaanni <mbaanni@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 15:07:58 by mbaanni           #+#    #+#              #
#    Updated: 2022/10/22 15:08:02 by mbaanni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar_fd.c ft_strncmp.c ft_putendl_fd.c ft_strnstr.c ft_putnbr_fd.c\
ft_strrchr.c ft_atoi.c ft_putstr_fd.c ft_strtrim.c ft_bzero.c ft_split.c\
ft_substr.c ft_calloc.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strdup.c\
ft_isalnum.c ft_strdup.c ft_toupper.c ft_isalpha.c ft_striteri.c\
ft_isascii.c ft_memchr.c ft_strjoin.c ft_isdigit.c ft_memcmp.c ft_strlcat.c\
ft_isprint.c ft_memcpy.c ft_strlcpy.c ft_itoa.c ft_memmove.c ft_strlen.c\
ft_memset.c ft_strmapi.c

SRCBON = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBG = $(SRC:.c=.o)
BNOBG = $(SRCBON:.c=.o)

NAME = libft.a

all : $(NAME)

bonus : $(BNOBG)
	ar -rc libft.a $(BNOBG)

$(NAME) : $(OBG)
	ar -rc $@ $^

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o
fclean : clean
	rm -rf libft.a
re : fclean  all

.PHONY: all bonus clean fclean re
