/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** task06 j5
*/

int my_is_prime(int nb)
{
    int a;
    int flag;

    if (nb == 0 || nb == 1)
        return (0);
    for (a = 2; a <= nb / 2; a++) {
        if (nb % a == 0)
            flag = 1;
    }
    if (flag == 1)
        return (0);
    else
        return (1);
}
