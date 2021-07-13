/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** task03 d6
*/

char *my_revstr(char *str)
{
    int f = 0;
    int z = 0;
    char *str2 = str;

    while (str[f] != '\0')
        f++;
    --f;
    while (f != 0) {
        str[z] = str2[f];
        z++;
        f--;
    }
    str[z] = '\0';
    return (str);
}
