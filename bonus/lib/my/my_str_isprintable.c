/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** task16 day 6
*/

int my_str_isprintable(char const *str)
{
    for (int read = 0; str[read] != '\0'; read++) {
        if (str[read] < 32)
            return (0);
    }
    return (1);
}
