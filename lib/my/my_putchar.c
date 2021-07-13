/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** task00 day 3
*/

#include "unistd.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
