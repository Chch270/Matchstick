/*
** EPITECH PROJECT, 2019
** my_put_EXA
** File description:
** index my_printf
*/

#include <stdio.h>
#include "unistd.h"

void my_putchar(char c);

int hexa_letters_maj(int n)
{
    if (n == 10)
        my_putchar('A');
    if (n == 11)
        my_putchar('B');
    if (n == 12)
        my_putchar('C');
    if (n == 13)
        my_putchar('D');
    if (n == 14)
        my_putchar('E');
    if (n == 15)
        my_putchar('F');
    return (0);
}

int my_put_gexa(int nb)
{
    int n;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb != 0) {
        n = nb % 16;
        nb = nb / 16;
        if (10 <= n && n <= 15) {
            my_put_gexa(nb % 16);
            hexa_letters_maj(n);
        } else {
            my_put_gexa(nb);
            my_putchar(n + 48);
        }
    }
    return (0);
}
