##
## EPITECH PROJECT, 2022
## fridge
## File description:
## fridge
##

NAME	= fridge

CC	= gcc

RM	= rm -f

SRCS	= ./lib/alloc_dstar_int.c \
	  ./lib/file.c \
	  ./lib/my_abs.c \
	  ./lib/my_atoi.c \
	  ./lib/my_int_len.c \
	  ./lib/my_intcpy.c \
	  ./lib/my_itoa.c \
	  ./lib/my_memset.c \
	  ./lib/my_puterror.c \
	  ./lib/my_putnbr.c \
	  ./lib/my_putstr.c \
	  ./lib/my_str_is.c \
	  ./lib/my_strcat.c \
	  ./lib/my_strcmp.c \
	  ./lib/my_strcpy.c \
	  ./lib/my_strlen.c \
	  ./lib/my_strncmp.c \
	  ./lib/my_strncpy.c \
	  ./lib/my_stwa.c \
	  ./src/fridge.c \
	  ./src/main.c \
	  ./src/make.c \
	  ./src/pasta.c \
	  ./src/save.c \
	  ./src/error.c \
	  ./src/my_stwa_bis.c \
	  ./src/parser.c \
	  ./src/ing.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
