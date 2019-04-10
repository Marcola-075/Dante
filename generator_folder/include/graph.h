/*
** EPITECH PROJECT, 2019
** graph_h
** File description:
** graph_h
*/

#ifndef GRAPH_H
#define GRAPH_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

typedef struct lnk
{
    int data;
    struct link *next;
}lnk_t;

typedef struct link
{
    int data;
    struct trun *link;
}link_t;

typedef struct trun
{
    link_t *node;
    struct trun *next;
}trun_t;

void print_list(lnk_t *list);
link_t *create_link(int data);
void print_data_of_connected_links(link_t *link);
void connect_links(link_t *link1, link_t *link2);

#endif
