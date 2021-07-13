/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** task05 j5
*/

int my_compute_square_root(int nb)
{
    int n = 1;

    while (n * n < nb) {
        n = n + 1;
    }
    if (n * n == nb)
        return (n);
    if (n * n > nb)
        return (0);
}
