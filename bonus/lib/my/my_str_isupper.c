/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** task15 d6
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    int num = 0;

    if (str[i] == '\0')
        return (1);
    while (str[i] != '\0') {
        if (64 < str[i] && str[i] < 91) {
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
