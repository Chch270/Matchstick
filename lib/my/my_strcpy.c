/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** task01_d6
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (src[i]== '\0')
        dest[i] = '\0';
    return (dest);
}
