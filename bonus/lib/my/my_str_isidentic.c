/*
** EPITECH PROJECT, 2020
** my_str_isidentic
** File description:
** by me
*/

int my_strcmp(char const *s1, char const *s2);

int my_str_isidentic(char *s1, char *s2)
{
    if (my_strcmp(s1, s2) != 0)
        return (0);
    for (int i = 0; s1[i] != '\0'; ++i)
        if (s1[i] != s2[i])
            return (0);
    return (1);
}
