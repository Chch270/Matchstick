/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** task12 d6
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int maj = 0;
    int min = 0;

    while (str[i] != '\0') {
        if (64 < str[i] && str[i] < 91)
            maj++;
        if (96 < str[i] && str[i] < 123)
            min++;
        if (maj == 1 || min == 1) {
            maj = 0;
            min = 0;
        } else {
            return (0);
        }
        i++;
    }
    if (maj == 0 || min == 0)
        return (1);
}
