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
    print_map(game);
}

int two_players_move(game_t *game, char *name)
{
    my_printf("\nPlayer turn: %s", name);
    if (line(game, game->mvmt) == 0)
        return (0);
    my_printf("Player removed ");
    my_printf("%d match(es) from line %d\n", game->mvmt[1], game->mvmt[0]);
    game->map = remove_map(game->map, game->mvmt);
    game->pipe -= game->mvmt[1];
    print_map(game);
}

int choose_game(game_t *game)
{
    int end = 0;
    char *input;

    input = get_next_line(0);
    while ((end = valid_input(input)) == 0) {
        my_printf("Please enter a valid input\n");
        input = get_next_line(0);
    }
    if (end == 1) {
        my_printf("Yaay ! You decided to play with me ! :)\n");
        end = begin_game(*game);
    } else if (end == 2) {
        my_printf("oh, I guess I will let you play together...\n");
        end = begin_2player(game);
    } else {
        my_printf("Be carefull, he plays very randomly.\n");
        end = begin_random(*game);
    }
    return (end);
}
