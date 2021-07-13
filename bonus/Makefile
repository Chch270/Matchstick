##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compilation
##

SRC	=	map.c			\
		main.c			\
		get_next_line.c		\
		lib/my/my_strlen.c	\
		lib/my/my_putstr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_printf.c	\
		lib/my/my_flag.c	\
		lib/my/my_put_bin.c	\
		lib/my/my_put_exa.c	\
		lib/my/my_put_gexa.c	\
		lib/my/my_put_gstr.c	\
		lib/my/my_put_oct.c	\
		lib/my/my_put_unint.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_str_isnum.c	\
		lib/my/my_getnbr.c	\
		error.c			\
		bot_move.c		\
		game.c			\
		find_game.c		\
		begin.c			\

NAME	=	matchstick

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
