# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 20:08:19 by ryusupov          #+#    #+#              #
#    Updated: 2024/05/24 19:34:07 by ryusupov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[0;33m
NC=\033[0m

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
#Mandatory files
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_substr.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_strcmp.c ft_isspace.c ft_atol.c \
        get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)
#Bonus files
BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_sorted_list.c
BONUS_OBJ = $(BONUS_SRC:.c=.o)

INCS = libft.h
RM = rm -f
#Animation for Welcome Frame
define ANIMATE_WELCOME
    @printf "\n\033[1;32mProcessing"
    @sleep 1
    @for i in {1..10}; do \
        printf "."; \
        sleep 0.2; \
    done
    @printf "\033[0m\n\n\n"
    @sleep 1
    @for frame in $(FRAMES); do \
        printf "\x1b[35m%s\n\033[0m" $$frame; \
        sleep 0.1; \
    done
    @echo
endef

define ANIMATE_PROCESSING
    @printf "\n\033[1;31mCleaning"
    @sleep 1
    @for i in {1..10}; do \
        printf "."; \
        sleep 0.2; \
    done
    @printf "\033[0m\n\n"
endef

all: $(OBJ) $(BONUS_OBJ)
#	$(ANIMATE_WELCOME)
	@$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)

%.o: %.c $(INCS)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)
#	$(ANIMATE_PROCESSING)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

FRAMES :=  	██╗ssss██╗███████╗██╗ssssss██████╗s██████╗s███╗sss███╗███████╗ssss████████╗s██████╗sssss██╗sssss██╗██████╗s███████╗████████╗\
			██║ssss██║██╔════╝██║sssss██╔════╝██╔═══██╗████╗s████║██╔════╝ssss╚══██╔══╝██╔═══██╗ssss██║sssss██║██╔══██╗██╔════╝╚══██╔══╝\
			██║s█╗s██║█████╗ss██║sssss██║sssss██║sss██║██╔████╔██║█████╗sssssssss██║sss██║sss██║ssss██║sssss██║██████╔╝█████╗sssss██║sss\
			██║███╗██║██╔══╝ss██║sssss██║sssss██║sss██║██║╚██╔╝██║██╔══╝sssssssss██║sss██║sss██║ssss██║sssss██║██╔══██╗██╔══╝sssss██║sss\
			╚███╔███╔╝███████╗███████╗╚██████╗╚██████╔╝██║s╚═╝s██║███████╗sssssss██║sss╚██████╔╝ssss███████╗██║██████╔╝██║ssssssss██║sss\
			s╚══╝╚══╝s╚══════╝╚══════╝s╚═════╝s╚═════╝s╚═╝sssss╚═╝╚══════╝sssssss╚═╝ssss╚═════╝sssss╚══════╝╚═╝╚═════╝s╚═╝ssssssss╚═╝sss\
			ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\
