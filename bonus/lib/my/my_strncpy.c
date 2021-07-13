/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** task02 d6
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (n != 0) {
        dest[i] = src[i];
        n--;
        i++;
        if (src[i] == '\0') {
            dest[i] = '\0';
            n = 0;
        }
    }
}
