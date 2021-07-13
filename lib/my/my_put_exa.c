/*
** EPITECH PROJECT, 2019
** my_put_exa
** File description:
** for my_printf
*/

#include <unistd.h>

void my_putchar(char c);

void hexa_letters_min(int n)
{
    if (n == 10)
        my_putchar('a');
    if (n == 11)
        my_putchar('b');
    if (n == 12)
        my_putchar('c');
    if (n == 13)
        my_putchar('d');
    if (n == 14)
        my_putchar('e');
    if (n == 15)
        my_putchar('f');
}

int my_put_exa(int nb)
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
            my_put_exa(nb % 16);
            hexa_letters_min(n);
        } else {
            my_put_exa(nb);
            my_putchar(n + 48);
        }
    }
    return (0);
}
