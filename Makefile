DEP_DIR =	include/

SRC_DIR =	src/

OBJ_DIR =	bin/

CC =	gcc

AR =	ar -rc

RM =	rm -rf

LIBFT_PATH =	libft

CFLAGS = -Wall -Werror -Wextra -I$(DEP_DIR) -I$(LIBFT_PATH)

NAME = libftprintf.a

SRCS = ft_printf.c \
		write_buf.c \
		print_str.c \
		print_char.c \
		print_ptr.c \
		print_decimal.c \
		print_uint.c \
		print_hex.c

OBJS	=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

all:	$(NAME)

$(OBJ_DIR):
		mkdir -p $@

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
		$(CC) $(CFLAGS) -o $@ -c $<

libft.a:
		make -C $(LIBFT_PATH)
		cp $(LIBFT_PATH)/libft.a ./$(NAME)

$(NAME):		libft.a $(OBJ_DIR) $(OBJS)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJ_DIR)

fclean:			clean
		$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
