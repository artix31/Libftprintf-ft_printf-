NAME            =   libftprintf.a
CC              =   cc
CFLAGS          =   -Wall -Wextra -Werror
AR              =   ar
ARFLAGS         =   rcs
RM              =   rm -rf
SRC             =   ft_printf ft_putchar ft_putitox ft_putnbr ft_putstr ft_putuns ft_putvoid
SRCS            =   $(addsuffix .c, $(SRC))
OBJ_DIR         =   obj
OBJS            =   $(addprefix $(OBJ_DIR)/, $(SRC:=.o))
LIBFT_PATH      =   ./libft
LIBFT           =   $(LIBFT_PATH)/libft.a

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)


$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJ_DIR)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

