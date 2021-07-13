/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** day 08 task04
*/

#include <stdio.h>
#include <stdlib.h>

char **fill_tab(char **tab, char const *str, int to_fill, int space)
{
    int mal = 0, fill = 0, strt = 0, r = 0;

    if (to_fill == space + 1)
        return (tab);
    for (; str[r] != '\0'; ++r)
        if (strt == to_fill)
            break;
        else if (str[r] == ' ')
            ++strt;
    for (int s = r; str[s] != ' ' && str[s] != '\0'; ++s)
        ++mal;
    tab[to_fill] = malloc(sizeof(char) * (mal + 1));
    for (; str[r] != '\0' && str[r] != ' '; ++r, ++fill)
        tab[to_fill][fill] = str[r];
    tab[to_fill][fill] = '\0';
    fill_tab(tab, str, to_fill + 1, space);
    return (tab);
}

char **my_str_to_word_array(char const *str)
{
    char **tab;
    int space = 0, to_fill = 0;

    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] == ' ')
            ++space;
    tab = malloc(sizeof(char *) * (space + 2));
    tab = fill_tab(tab, str, to_fill, space);
    return (tab);
}
