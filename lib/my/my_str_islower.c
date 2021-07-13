/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** task14 d6
*/

int my_str_islower(char const *str)
{
    int i = 0;
    int num = 0;

    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0') {
        if (96 < str[i] && str[i] < 123) {
            num = 1;
        } else {
            num = 0;
            return (0);
        }
        i++;
    }
    if (num == 1)
        return (1);
}
