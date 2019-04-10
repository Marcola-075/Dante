/*
** EPITECH PROJECT, 2019
** create_link
** File description:
** create_link
*/

#include "graph.h"

link_t *create_link(int data)
{
    link_t *new = malloc(sizeof(*new));

    new->data = data;
    new->link = NULL;
    return (new);
}
