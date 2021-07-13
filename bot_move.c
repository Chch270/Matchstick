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
    int x = 1;

    for (; x != game.size + 1; ++x)
        if ((nb_stick = stick_on_line(game.map, x)) > 1)
            break;
    if (nb_stick <= 1) {
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

void bot_move(game_t *game)
{
    my_printf("\nAI's turn...\n");
    game->bmvmt = bot_pos(*game);
    my_printf("AI removed ");
    my_printf("%d match(es) from line %d\n", game->bmvmt[1], game->bmvmt[0]);
    game->map = remove_map(game->map, game->bmvmt);
    game->pipe -= game->bmvmt[1];
    print_map(*game);
}
