/*
** EPITECH PROJECT, 2019
** print_data_of
** File description:
** connected_links
*/

#include "graph.h"

void print_data_of_connected_links(link_t *link)
{
    link_t *lst = link;

    printf("%d\n", lst->data);
    while (lst->link != NULL) {
        //printf("%d\n", lst->link->node->data);
        print_data_of_connected_links(lst->link->node);
        lst->link = lst->link->next;
    }
}
