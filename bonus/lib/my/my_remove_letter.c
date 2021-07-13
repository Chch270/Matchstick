/*
** EPITECH PROJECT, 2020
** my_remove_letter
** File description:
** by Ch
*/

char *rem_word(char *str, int word)
{
    for (int fill = word + 1; str[fill] != '\0'; ++fill, ++word)
        str[word] = str[fill];
    str[word] = '\0';
    return (str);
}
