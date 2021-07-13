##
## EPITECH PROJECT, 2019
## lib
## File description:
## my.h
##

SRC	=	my_is_prime.c			\
		my_showstr.c			\
		my_str_isalpha.c		\
		my_strlowcase.c			\
		my_swap.c			\
		my_compute_power_rec.c		\
		my_putchar.c			\
		my_sort_int_array.c		\
		my_str_islower.c		\
		my_strncat.c			\
		my_compute_square_root.c	\
		my_put_nbr.c			\
		my_strcapitalize.c		\
		my_str_isnum.c			\
		my_strncmp.c			\
		my_find_prime_sup.c		\
		my_putstr.c			\
		my_strcat.c			\
		my_str_isprintable.c		\
		my_strncpy.c			\
		my_getnbr.c			\
		my_revstr.c			\
		my_strcmp.c			\
		my_str_isupper.c		\
		my_strstr.c			\
		my_isneg.c			\
		my_showmem.c			\
		my_strcpy.c			\
		my_strlen.c			\
		my_strupcase.c			\
		my_flag.c			\
		my_printf.c			\
		my_put_bin.c			\
		my_put_exa.c			\
		my_put_gexa.c			\
		my_put_gstr.c			\
		my_put_oct.c			\
		my_put_unint.c			\
		my_str_isidentic.c		\
		my_str_to_word_array.c		\
		my_remove_letter.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy

$(NAME):	$(OBJ)
	gcc -c *.c $(NAME) $(OBJ)

$(NAME):
	ar rc libmy.a *.o
	mv libmy.a ..
	mkdir include
	mv include ../..
	cp my.h ../../include/

clean:
	rm -f $(OBJ)
	rm -f *~
	rm ../../include/my.h
	rmdir ../../include
	rm libmy.a
	rm ../libmy.a

fclean: clean
	rm -f $(NAME)

re:	fclean all
