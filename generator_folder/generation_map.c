/*
** EPITECH PROJECT, 2019
** generation_map
** File description:
** generate an empty map
*/

#include "include/my.h"
#include <unistd.h>
#include <stdlib.h>

void display_map(char **stack)
{
    int n = 0;

    while (stack[n] != NULL) {
        my_putstr(stack[n]);
        n = n + 1;
        my_putchar('\n');
    }
}

int main(int ac, char **av)
{
    int n = 0;
    int i = 0;
    int x = my_getnbr(av[1]);
    int y = my_getnbr(av[2]);
    char **stack = malloc(sizeof(char *) * (y + 1));

    stack[y] = NULL;
    while (n != y) {
        stack[n] = malloc(sizeof(char) * (x + 1));
        while (i != x) {
            stack[n][i] = 'X';
            i = i + 1;
        }
        stack[n][i] = '\0';
        i = 0;
        n = n + 1;
    }
    display_map(stack);
    return (0);
}
