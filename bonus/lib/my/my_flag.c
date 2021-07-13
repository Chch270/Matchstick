/*
** EPITECH PROJECT, 2019
** flags
** File description:
** index my_printf
*/

#include <stdarg.h>

int my_put_gstr(const char *str);
int my_put_bin(unsigned nb);
int my_put_unsigned_int(unsigned int nb);
int my_put_oct(int nb);
int my_put_exa(int nb);
int my_put_gexa(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);

int tab_str(char *str, int r, va_list ap)
{
    char *list = "sS";
    int (*tab[2])(const char *);
    int i = 0;
    int len = 0;

    tab[0] = &my_putstr;
    tab[1] = &my_put_gstr;
    for (; str[r] != list[i] && list[i] != '\0' && str[r] != '\0'; i++);
    if (str[r] == list[i]) {
        tab[i](va_arg(ap, char *));
        len++;
    }
    return (len);
}

int tab_int(char *str, int r, va_list ap)
{
    char *list = "dioxX";
    int (*tab[6])(int);
    int i = 0;
    int len = 0;

    tab[0] = &my_put_nbr;
    tab[1] = &my_put_nbr;
    tab[2] = &my_put_oct;
    tab[3] = &my_put_exa;
    tab[4] = &my_put_gexa;
    for (; str[r] != list[i] && list[i] != '\0' && str[r] != '\0'; i++);
    if (str[r] == list[i]) {
        tab[i](va_arg(ap, int));
        len++;
    }
    return (len);
}

int tab_unsigned_int(char *str, int r, va_list ap)
{
    char *list = "ub";
    int (*tab[2])(unsigned int);
    int i = 0;
    int len = 0;

    tab[0] = &my_put_unsigned_int;
    tab[1] = &my_put_bin;
    for (; str[r] != list[i] && list[i] != '\0' && str[r] != '\0'; i++);
    if (str[r] == list[i]) {
        tab[i](va_arg(ap, unsigned int));
        len++;
    }
    return (len);
}

int tab_char(char *str, int r, va_list ap)
{
    char *list = "c";
    void (*tab[1])(char);
    int i = 0;
    int len = 0;

    tab[0] = &my_putchar;
    for (; str[r] != list[i] && list[i] != '\0' && str[r] != '\0'; i++);
    if (str[r] == list[i]) {
        tab[i](va_arg(ap, int));
        len++;
    }
    return (len);
}
