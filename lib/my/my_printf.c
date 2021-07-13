/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** module Unix system
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include "my.h"

void my_putchar(char c);
int tab_str(char *str, int r, va_list ap);
int tab_int(char *str, int r, va_list ap);
int tab_unsigned_int(char *str, int r, va_list ap);
int tab_char(char *str, int r, va_list ap);

int search_flag(char *str, int r, va_list ap)
{
    int len = 0;

    len = len + tab_int(str, r, ap);
    len = len + tab_char(str, r, ap);
    len = len + tab_str(str, r, ap);
    len = len + tab_unsigned_int(str, r, ap);
    if (str[r] == '%' && str[r - 1] == '%' && r != 0) {
        my_putchar(str[r]);
        len++;
    }
    return (len);
}

int my_printf(char *str, ...)
{
    va_list ap;
    int len = 0;

    va_start(ap, str);
    for (int r = 0; str[r] != '\0'; r++) {
        if (str[r] == '%')
            len = search_flag(str, r + 1, ap);
        if (len != 0) {
            r++;
            len = 0;
        } else
            my_putchar(str[r]);
    }
    return (0);
}
