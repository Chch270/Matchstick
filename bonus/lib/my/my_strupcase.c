/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** task08 d6
*/

char *my_strupcase(char *str)
{
    int read = 0;

    while (str[read] != '\0') {
        if (96 < str[read] && str[read] < 123)
            str[read] = str[read] - 32;
        read++;
    }
    return (str);
}
