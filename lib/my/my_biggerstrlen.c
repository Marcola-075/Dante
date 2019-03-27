/*
** EPITECH PROJECT, 2018
** my_biggerstrlen
** File description:
** bigger_strlen
*/

#include <stddef.h>

int my_strlen(char *str);

int my_biggerstrlen(char **tab)
{
    int nb = 0;
    int out = 0;
    int i = 0;

    while (tab[i] != NULL) {
        nb = my_strlen(tab[i]);
        if (nb > out)
            nb = out;
        i = i + 1;
    }
    return (out);
}
