/*
** EPITECH PROJECT, 2020
** CPE
** File description:
** game
*/

#include "include/my.h"

int player_move(game_t *game)
{
    my_printf("\nYour turn:\n");
    if (line(game, game->mvmt) == 0)
        return (0);
    my_printf("Player removed ");
    my_printf("%d match(es) from line %d\n", game->mvmt[1], game->mvmt[0]);
    game->map = remove_map(game->map, game->mvmt);
    game->pipe -= game->mvmt[1];
    print_map(*game);
    return (1);
}

int begin_game(game_t game)
{
    print_map(game);
    while (game.pipe != 0) {
        if (player_move(&game) == 0)
            return (0);
        if (game.pipe == 0)
            return (2);
        bot_move(&game);
        if (game.pipe == 0)
            return (1);
    }
    return (0);
}
