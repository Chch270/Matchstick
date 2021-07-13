/*
** EPITECH PROJECT, 2019
** my_put_bin
** File description:
** index my_printf
*/

#include "unistd.h"

void my_putchar(char c);

int my_put_bin(unsigned nb)
{
    unsigned int n;

    if (nb >= 2) {
        n = nb % 2;
        nb = nb / 2;
        my_put_bin(nb);
        my_putchar(n + 48);
    } else
        my_putchar(nb + 48);
    return (0);
}
