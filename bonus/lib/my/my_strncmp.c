/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** task07 d6
*/

int my_strncmp(char const *s1, char const *s2,int n)
{
    int nb1 = 0;
    int nb2 = 0;

    while (nb1 != n && s1[nb1] != '\0')
        nb1++;
    while (nb2 != n && s2[nb2] != '\0')
        nb2++;
    if (nb1 > nb2) {
        return (1);
    } else if (nb1 == nb2){
        return (0);
    } else {
        return (-1);
    }
}
