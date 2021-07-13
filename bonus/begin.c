/*
** EPITECH PROJECT, 2020
** bonus
** File description:
** begin
*/

#include "include/my.h"

int begin_game(game_t game)
{
    print_map(&game);
    while (game.pipe != 0) {
        if (player_move(&game) == 0)
            return (0);
        if (game.pipe == 0)
            return (2);
        bot_move(&game, 1);
        if (game.pipe == 0)
            return (1);
    }
}

int begin_2player(game_t *game)
{
    char *name1;
    char *name2;

    my_printf("Name of the first player:\n");
    game->name1 = get_next_line(0);
    my_printf("Name of the second player:\n");
    game->name2 = get_next_line(0);
    print_map(game);
    while (game->pipe != 0) {
        if (two_players_move(game, game->name1) == 0)
            return (0);
        if (game->pipe == 0)
            return (3);
        if (two_players_move(game, game->name2) == 0)
            return (0);
        if (game->pipe == 0)
            return (4);
    }
}

int begin_random(game_t game)
{
    print_map(&game);
    while (game.pipe != 0) {
        if (player_move(&game) == 0)
            return (0);
        if (game.pipe == 0)
            return (2);
        bot_move(&game, 2);
        if (game.pipe == 0)
            return (1);
    }
}
