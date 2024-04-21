# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 00:30:25 by ssoeno            #+#    #+#              #
#    Updated: 2024/04/20 19:12:16 by ssoeno           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
# CC = cc
# CFLAGS = -Wall -Wextra -Werror
# AR = ar rc
# SRC = ft_isalpha.c
# ft_isalnum.c
# ft_isdigit.c
# ft_isascii.c
# ft_isprint.c
# ft_strlen.c
# ft_memset.c
# ft_bzero.c
# ft_memcpy.c
# ft_memmove.c
# ft_strlcpy.c
# ft_strlcat.c
# ft_toupper.c
# ft_tolower.c
# ft_strchr.c
# ft_strrchr.c
# ft_strncmp.c
# ft_memchr.c
# ft_memcmp.c
# ft_strnstr.c
# ft_atoi.c
# HDR_DIR = includes
# OBJ = $(SRC:.c=.o)
# DICT_SRCS = $(wildcard $(SRC_DIR)/*.c)
# DICT_OBJS = $(DICT_SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
# DICT_NAME = dictionary

# # Rules
# all: $(DICT_NAME)

# $(DICT_NAME): $(DICT_OBJS)
# 	$(CC) $(CFLAGS) -o $(DICT_NAME) $(DICT_OBJS)

# $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
# 	mkdir -p $(OBJ_DIR)
# 	$(CC) $(CFLAGS) -I $(HDR_DIR) -c $< -o $@

# clean:
# 	rm -f $(OBJ_DIR)/*.o

# fclean: clean
# 	rm -f $(DICT_NAME)

# re: fclean all

# .PHONY: all clean fclean re

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
ft_memset.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c \
ft_strjoin.c ft_split.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = ${SRCS:.c=.o}
OBJSB = ${SRCSB:.c=.o}
NAME = libft.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

bonus: ${NAME} ${OBJSB}
	${LIBC} ${NAME} ${OBJSB}
clean:
	${RM} ${OBJS} ${OBJSB}

fclean: clean
	${RM} ${NAME} ${bonus}

re: fclean all

.PHONY : all clean fclean re