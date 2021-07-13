/*
** EPITECH PROJECT, 2019
** my_int_to_str
** File description:
** fonction annexe
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/struc.h"

char *my_int_to_str(int nbr)
{
    int i = 0, ne = 0, fill = 0;
    char *str = "0";

    if (nbr < 0) {
        ++ne;
        nbr = nbr * (-1);
    }
    if (nbr == 0)
        return (str);
    for (int len = nbr; len != 0; len = len / 10)
        i++;
    str = malloc(sizeof(char) * (i + ne + 1));
    if (ne == 1) {
        str[0] = '-';
        nbr = nbr * (-1);
        ++fill;
    }
    for (; nbr != 0; nbr = nbr / 10, ++fill)
        str[fill] = ((nbr % 10) + 48);
    str[fill] = '\0';
    return (my_revstr(str));
}
