/*
** EPITECH PROJECT, 2019
** my_swap
** File description:
** task01 day 4
*/

void my_swap(int *a, int *b)
{
    int c = 0;
    int d = 0;

    d = *b;
    c = *a;
    *b = c;
    *a = d;
}
