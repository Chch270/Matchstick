/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** task06 d6
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int nbr1 = my_strlen(s1);
    int nbr2 = my_strlen(s2);

    if (nbr1 > nbr2) {
        return (1);
    } else if (nbr1 == nbr2) {
        return (0);
    } else {
        return (-1);
    }
}
