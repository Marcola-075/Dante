/*
** EPITECH PROJECT, 2019
** connect_links
** File description:
** connect_links
*/

#include "graph.h"

void connect_links(link_t *link1, link_t *link2)
{
    trun_t *tmp;
    trun_t *new = malloc(sizeof(*new));

    new->node = link2;
    new->next = NULL;
    tmp = link1->link;
    if (tmp != NULL) {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
    else
        link1->link = new;
}
