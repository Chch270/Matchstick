/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** task05 d6
*/

int my_strlen(char const *str);

int find(char *str, char const *to_find, int search, int lengthto_find)
{
    int haha = 0;
    int letterfind = 0;

    while (lengthto_find != 0) {
        if (to_find[letterfind] == str[search]) {
            lengthto_find--;
            letterfind++;
            search++;
        } else {
            haha++;
            lengthto_find = 0;
            return (0);
        }
    }
    if (haha == 1) {
        return (0);
            } else {
        return (1);
    }
}

char *my_strstr(char *str, char const *to_find)
{
    int search = 0;
    int finded = 0;
    int maybe = 0;
    int lengthto_find = my_strlen(to_find);
    int lengthstr = my_strlen(str);
    while (str[search] != '\0') {
        if (str[search] == to_find[0])
            maybe = find(str, to_find, search, lengthto_find);
        if (maybe == 0) {
            search++;
        } else {
            finded = search;
            search = lengthstr;
        }
    }
    if (finded != 0) {
        str = str + finded;
        return (str);
    }
    return (0);
}
