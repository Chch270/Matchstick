/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** task09 d6
*/

char *my_strlowcase(char *str)
{
    int read = 0;
    while (str[read] != '\0') {
        if (64 < str[read] && str[read] < 91)
            str[read] = str[read] + 32;
        read++;
    }
    return (str);
}
