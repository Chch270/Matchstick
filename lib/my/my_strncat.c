/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** task03 d7
*/

#include <string.h>

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int n)
{
    int dest_len = strlen(dest);
    int i = 0;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}
