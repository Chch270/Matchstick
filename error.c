/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** errro
*/

#include "include/my.h"

int matches(game_t *game, int *mv, char *input)
{
    int nb = 0;

    if (my_str_isnum(input) == 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (line(game, mv));
    } else if ((nb = my_getnbr(input)) > game->max) {
        my_printf("Error: you cannot remove more than ");
        my_printf("%d matches per turn\n", game->max);
        return (line(game, mv));
    }
    if (nb == 0) {
        my_printf("Error: you have to remove at least one match\n");
        return (line(game, mv));
    } else if (stick_on_line(game->map, mv[0]) < nb) {
        my_printf("Error: not enough matches on this line\n");
        return (line(game, mv));
    }
    mv[1] = nb;
    return (1);
}

int line(game_t *game, int *mv)
{
    char *input = NULL, *input2 = NULL;
    int nb = 0;
    size_t size = 0;

    my_printf("Line: ");
    if (getline(&input, &size, stdin) < 0)
        return (0);
    if (my_str_isnum(input) == 0) {
        my_printf("Error: invalid input (positive number expected)\n");
        return (line(game, mv));
    } else if ((nb = my_getnbr(input)) < 1 || nb > game->size) {
        my_printf("Error: this line is out of range\n");
        return (line(game, mv));
    }
    mv[0] = nb;
    my_printf("Matches: ");
    if (getline(&input2, &size, stdin) < 0 || matches(game, mv, input2) == 0)
        return (0);
    return (1);
}
