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

void put_in_list(stac **list, int y, int x, int inter)
{
    stac *new = malloc(sizeof(*new));

    new->y = y;
    new->x = x;
    new->inter = inter;
    new->next = *list;
    *list = new;
}

void remove_frst_elem(stac **list)
{
    if (*list != NULL) {
        *list = (*list)->next;
    }
}

void disp_list(stac *list)
{
    stac *nb;

    nb = list;
    while (nb != NULL) {
        my_put_nbr(nb->y);
        my_putstr("/");
        my_put_nbr(nb->x);
        my_putstr("-> ");
        nb = nb->next;
    }
    my_putstr("NULL\n");
}
