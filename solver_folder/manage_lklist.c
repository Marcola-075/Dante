/*
** EPITECH PROJECT, 2018
** manage_lklist
** File description:
** manage_lklist
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

/*struct stac *create_list(void)
{
    stac *list = NULL;

    return (list);
    }*/

void put_in_list(stac **list, int y, int x)
{
    stac *new = malloc(sizeof(*new));

    new->y = y;
    new->x = x;
    new->next = *list;
    *list = new;
}

void disp_list(stac *list)
{
    stac *nb;

    nb = list;
    while (nb != NULL) {
        my_put_nbr(nb->x);
        my_putstr("//");
        my_put_nbr(nb->y);
        my_putstr("-> ");
        nb = nb->next;
    }
    my_putstr("NULL\n");
}
