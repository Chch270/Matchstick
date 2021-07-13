/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** task07 day3
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int n;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        n = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(n + 48);
    }
    else
        my_putchar(nb + 48);
    return (0);
}
