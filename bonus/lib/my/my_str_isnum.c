/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** task13 d6
*/

int my_str_isnum(char const *str)
{
    int num = 0;

    if (str[0] == '\0')
        return (1);
    for (int i = 0; str[i] != '\n' && str[i] != '\0'; ++i)
        if (47 < str[i] && str[i] < 58);
        else
            return (0);
    return (1);
}
