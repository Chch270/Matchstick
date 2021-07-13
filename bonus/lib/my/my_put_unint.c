/*
** EPITECH PROJECT, 2019
** my_put_unint
** File description:
** index my_printf
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_unsigned_int(unsigned int nb)
{
    unsigned int n;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        n = nb % 10;
        nb = nb / 10;
        my_put_unsigned_int(nb);
        my_putchar(n + 48);
    }
    else
        my_putchar(nb + 48);
    return (0);
}
