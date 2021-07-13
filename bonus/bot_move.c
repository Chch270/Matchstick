/*
** EPITECH PROJECT, 2020
** CPE
** File description:
** bot move
*/

#include "include/my.h"

int search_one_stick(game_t game)
{
    int nb_stick = 0;
    int x = 0;

    for (; x != game.size; ++x)
        if ((nb_stick = stick_on_line(game.map, x)) == 1)
            break;
    return (x);
}

int *bot_pos(game_t game)
{
    int nb_stick = 0;
    int x = 0;

    for (; x != game.size; ++x)
        if ((nb_stick = stick_on_line(game.map, x)) > 1)
            break;
    if (x == game.size && nb_stick <= 1) {
        x = search_one_stick(game);
        nb_stick = stick_on_line(game.map, x);
    }
    game.bmvmt[0] = x;
    if (nb_stick != 1)
        --nb_stick;
    if (nb_stick > game.max)
        game.bmvmt[1] = game.max;
    else
        game.bmvmt[1] = nb_stick;
    return (game.bmvmt);
}

int *bot_pos_random(game_t game)
{
    int y = 0;
    int x = (random() % game.size) + 1;
    int len = 0;

    while ((len = stick_on_line(game.map, x)) == 0)
        x = (random() % game.size) + 1;
    game.bmvmt[0] = x;
    y = (random() % game.max) + 1;
    while (y > len)
        y = (random() % game.max) + 1;
    game.bmvmt[1] = y;
    return (game.bmvmt);
}

void bot_move(game_t *game, int r)
{
    my_printf("\nAI's turn...\n");
    if (r == 1)
        game->bmvmt = bot_pos(*game);
    else
        game->bmvmt = bot_pos_random(*game);
    my_printf("AI removed ");
    my_printf("%d match(es) from line %d\n", game->bmvmt[1], game->bmvmt[0]);
    game->map = remove_map(game->map, game->bmvmt);
    game->pipe -= game->bmvmt[1];
    print_map(game);
}
