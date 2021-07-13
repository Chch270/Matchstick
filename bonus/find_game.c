/*
** EPITECH PROJECT, 2020
** CPE
** File description:
** find_game
*/

#include "include/my.h"

int valid_input(char *str)
{
    int nb;

    if (my_str_isnum(str) == 0)
        return (0);
    nb = my_getnbr(str);
    if (nb != 1 && nb != 2 && nb != 3)
        return (0);
    return (nb);
}
