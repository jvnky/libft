# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychair <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 12:53:42 by ychair            #+#    #+#              #
#    Updated: 2019/11/06 15:59:28 by ychair           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_isascii.c ft_isalpha.c ft_tolower.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_toupper.c ft_isalnum.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcmp.c ft_strdup.c ft_strstr.c ft_calloc.c ft_itoa.c ft_substr.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_split.c ft_strjoin.c

SRCS_BONUS_LIBFT = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

INCLUDES = libft.h
OBJS_LIBFT = $(SRCS:.c=.o)
OBJS_BONUS_LIBFT = $(SRCS_BONUS_LIBFT:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS_LIBFT)
	@ar rc $(NAME) $(OBJS_LIBFT)
	@ranlib $(NAME)

%.o : %.c $(INCLUDES)
	@$(CC) $(CFLAGS) -I $(INCLUDES) -o ${<:.c=.o} -c $<
re : 
	@make fclean 
	@make all

bonus : $(OBJS_LIBFT) $(OBJS_BONUS_LIBFT)
	@ar rc $(NAME) $(OBJS_LIBFT) $(OBJS_BONUS_LIBFT)
	@ranlib $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :
	@rm -f $(OBJS_LIBFT) $(OBJS_BONUS_LIBFT)

.PHONY : all re fclean clean bonus
