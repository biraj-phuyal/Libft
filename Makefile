# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: biphuyal <biphuyal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 18:38:41 by biphuyal          #+#    #+#              #
#    Updated: 2025/04/29 14:36:16 by biphuyal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
HEADER = libft.h
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c 
BONUS = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
AR = ar rcs

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}
all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS} 

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS} ${BONUS_OBJS}
	rm -f bonus

fclean:	clean
	rm -f ${NAME}

bonus :	${OBJS} $(BONUS_OBJS)
	${AR}	$(NAME)	${OBJS} $(BONUS_OBJS)
	touch bonus

re:	fclean all

.PHONY:	all clean fclean re
