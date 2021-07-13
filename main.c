/*
** EPITECH PROJECT, 2020
** main
** File description:
** matchsticks
*/

#include "include/my.h"

void print_map(game_t game)
{
    for (int i = 0; i != game.size + 2; ++i)
        my_printf("%s\n", game.map[i]);
}

char **remove_map(char **map, int *p_mv)
{
    int r = 1;

    for (; map[p_mv[0]][r] != '|'; ++r);
    for (; map[p_mv[0]][r] != ' ' && map[p_mv[0]][r] != '*'; ++r);
    --r;
    for (int i = 0; i != p_mv[1]; ++i, --r)
        map[p_mv[0]][r] = ' ';
    return (map);
}

int stick_on_line(char **map, int x)
{
    int nbr = 0;

    for (int i = 0; map[x][i] != '\0'; ++i)
        if (map[x][i] == '|')
            ++nbr;
    return (nbr);
}

int end_message(int end)
{
    if (end == 1)
        my_printf("I lost... snif... but I'll get you next time!!\n");
    if (end == 2)
        my_printf("You lost, too bad...\n");
    return (end);
}

int main(int ac, char **av)
{
    int end = 0;
    game_t game;

    if (ac != 3)
        return (84);
    game.size = my_getnbr(av[1]);
    game.max = my_getnbr(av[2]);
    if (game.size < 1 || game.max < 1)
        return (84);
    game.map = create_map(game.size);
    game.pipe = game.size * game.size;
    game.mvmt = malloc(sizeof(int) * 2);
    game.bmvmt = malloc(sizeof(int) * 2);
    end = begin_game(game);
    return (end_message(end));
}
