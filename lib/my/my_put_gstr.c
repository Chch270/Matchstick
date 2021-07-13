/*
** EPITECH PROJECT, 2019
** my_put_STR.c
** File description:
** index my_printf
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);
int my_put_oct(int nb);

int my_put_gstr(const char *str)
{
    int oct = 0;

    for (int r = 0; str[r] != '\0'; r++)
        if (!(32 <= str[r] && str[r] <= 127)) {
            oct = str[r];
            my_putchar('\\');
            my_put_oct(oct);
        } else
            my_putchar(str[r]);
    return (0);
}
