/*
** EPITECH PROJECT, 2019
** my
** File description:
** task02 day 9
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct game
{
    int size;
    int max;
    int pipe;
    char *name1;
    char *name2;
    int *mvmt;
    int *bmvmt;
    char **map;
} game_t;

int begin_2player(game_t *game);
int begin_random(game_t game);
int player_move(game_t *game);
int two_players_move(game_t *game, char *name);
int valid_input(char *str);
int choose_game(game_t *game);
void bot_move(game_t *game, int r);
void print_map(game_t *game);
int stick_on_line(char **map, int x);
char **remove_map(char **map, int *p_mv);
int begin_game(game_t game);
int *bot_pos(game_t game);
char *get_next_line(int fd);
char *my_remove_letter(char *str, int word);
int my_put_gstr(const char *str);
int tab_str(char *str, int r, va_list ap);
int tab_int(char *str, int r, va_list ap);
int tab_unsigned_int(char *str, int r, va_list ap);
int tab_char(char *str, int r, va_list ap);
int my_printf(char *str, ...);
int my_put_bin(unsigned nb);
int my_put_unsigned_int(unsigned int nb);
int my_put_oct(int nb);
int my_put_exa(int nb);
int my_put_gexa(int nb);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char * my_revstr(char *str);
char * my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
char **my_str_to_word_array(char const *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_str_isidentic(char *s1, char *s2);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char **create_map(int size);
int line(game_t *game, int *mv);
