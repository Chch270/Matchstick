/*
** EPITECH PROJECT, 2019
** getnextline
** File description:
** CPE
*/

#include "include/my.h"
#include "include/get_next_line.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *my_cat(char *dest, char *src)
{
    int k = 0, i = 0, j = 0;
    char *strfinal;

    if (dest == NULL)
        return (src);
    else if (src[0] == '\0')
        return (dest);
    for (; dest[i] != '\0'; ++i);
    for (; src[j] != '\0'; ++j);
    strfinal = malloc(sizeof(char) * (i + j + 1));
    for (; k != i; k++)
        strfinal[k] = dest[k];
    strfinal[k + 1] = '\0';
    for (int u = 0; u != j; k++, u++)
        strfinal[k] = src[u];
    strfinal[k] = '\0';
    return (strfinal);
}

char *reread_fd(char *str, int fd, char *reminder)
{
    int intread = 0, bs = 0, goout = 0;
    char *temp;

    while (1) {
        if (str[0] == '\0')
            break;
        for (; str[bs] != '\0'; ++bs)
            if (str[bs] == '\n')
                ++goout;
        if (goout != 0)
            break;
        temp = malloc(sizeof(char) * READ_SIZE + 1);
        intread = read(fd, temp, READ_SIZE);
        temp[intread] = '\0';
        str = my_cat(str, temp);
    }
    str = my_cat(reminder, str);
    return (str);
}

char *verif_add_str(char *str, int fd)
{
    static char *reminder;
    int re = 0, mal_final = 0, fill = 0;

    if (reminder == NULL && str[0] == '\0')
        return (NULL);
    str = reread_fd(str, fd, reminder);
    for (; str[re] != '\n'; ++re);
    for (int i = re + 1; str[i] != '\0'; ++i, ++mal_final);
    if (mal_final == 0)
        reminder = NULL;
    else {
        reminder = malloc(sizeof(char) * mal_final);
        for (int i = re + 1; str[i] != '\0'; ++i, ++fill)
            reminder[fill] = str[i];
        reminder[fill] = '\0';
    }
    str[re] = '\0';
    return (str);
}

char *get_next_line(int fd)
{
    int intread = 0;
    char *str = malloc(sizeof(char) * READ_SIZE + 1);

    if (str == NULL)
        return (str);
    if (fd < 0 || READ_SIZE < 1)
        return (NULL);
    intread = read(fd, str, READ_SIZE);
    str[intread] = '\0';
    if (fd == 0)
        return (str);
    str = verif_add_str(str, fd);
    for (int i = 0; str[i] != '\0'; ++i)
        if (str[i] == '\n') {
            str[i] = '\0';
            return (str);
        }
    return (str);
}
