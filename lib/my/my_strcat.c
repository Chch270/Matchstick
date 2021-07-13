/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** yey
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char *src)
{
    int	k = 0;
    int i = my_strlen(dest);
    int j = my_strlen(src);
    char *strfinal = malloc(sizeof(char) * (i + j + 1));

    j = 0;
    for (; k != i; k++)
        strfinal[k] = dest[k];
    strfinal[k + 1] = '\0';
    for (; src[j] != '\0'; k++, j++)
        strfinal[k] = src[j];
    strfinal[k + 1] = '\0';
    return (strfinal);
}
