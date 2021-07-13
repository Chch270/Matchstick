/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** task10 d6
*/

int is_spe(char *str, int read)
{
    int min = 0;
    if (64 < str[read - 1] && str[read - 1] < 91)
        return (0);
    else if (96 < str[read - 1] && str[read - 1] < 123)
        return (0);
    if (47 < str[read - 1] && str[read - 1] < 58)
        return (0);
    if (96 < str[read] && str[read] < 123)
        min = 1;
    if (min == 1) {
        return (1);
    } else {
        return (0);
    }
}

int is_maj(char *str, int read)
{
    if (64 < str[read] && str[read] < 91) {
        return (1);
    } else {
        return (0);
    }
}

char *my_strcapitalize(char *str)
{
    int read = 0;
    int maj = 0;
    int spe = 0;
    int majbemaj = 0;

    if (96 < str[read] && str[read] < 123)
        str[read] = str[read] - 32;
    read++;
    while (str[read] != '\0') {
        spe = 0;
        majbemaj = 0;
        maj = is_maj(str, read);
        if (maj == 1)
            str[read] = str[read] + 32;
        spe = is_spe(str, read);
        if (spe == 1)
            str[read] = str[read] - 32;
        read++;
    }
    return (str);
}
