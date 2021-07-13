/*
** EPITECH PROJECT, 2020
** bootstrap
** File description:
** CPE
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>

char **fill_map(char **map, int size)
{
    for (int i = 1; i != size + 1; ++i)
        for (int j = 1; j != (size * 2); ++j)
            if (size - i < j && j < size + i)
                map[i][j] = '|';
            else
                map[i][j] = ' ';
    return (map);
}

char **create_cadre(char **map, int i, int j, int size)
{
    if (i == 0 || i == (size + 1))
        map[i][j] = '*';
    else
        if (j == 0 || j == (size * 2))
            map[i][j] = '*';
        else
            map[i][j] = ' ';
    return (map);
}

char **create_map(int size)
{
    char **map = malloc(sizeof(char *) * (size + 2));

    for (int i = 0; i != (size + 2); ++i)
        map[i] = malloc(sizeof(char) * ((size * 2) + 2));
    for (int i = 0; i != (size + 2); ++i)
        for (int j = 0; j != (size * 2) + 1; ++j)
            map = create_cadre(map, i, j, size);
    map = fill_map(map, size);
    return (map);
}
