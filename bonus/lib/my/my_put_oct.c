/*
** EPITECH PROJECT, 2019
** my_put_oct
** File description:
** index my_printf
*/

#include "unistd.h"

void my_putchar(char c);

int my_put_oct(int nb)
{
    int n;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 8) {
        n = nb % 8;
        nb = nb / 8;
        my_put_oct(nb);
        my_putchar(n + 48);
    } else
        my_putchar(nb + 48);
    return (0);
}
