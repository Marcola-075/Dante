/*
** EPITECH PROJECT, 2019
** my_solver
** File description:
** solver
*/

#include "my.h"

status ini_struct(status stat, char **base)
{
    stat.y = 0;
    stat.x = 0;
    stat.y_max = my_tablen(base);
    stat.x_max = my_strlen(base[0]);
    stat.map = base;
    return (stat);
}

void give_new_pos(status *stat, stac *list)
{
    if (list != NULL) {
        stat->y = list->y;
        stat->x = list->x;
        return;
    }
    stat->y = 0;
    stat->x = 0;
    return;
}

void final_solver(char **map, status stat)
{
    stat.map[my_tablen(map) - 1][my_strlen(map[0]) - 1] = 'o';
    stat.map = clear_map(stat.map);
    disp_maze(stat.map);
}

void my_solver(char **map)
{
    status stt = ini_struct(stt, map);
    list *fcnt = NULL;
    stac *list = NULL;

    while (stt.y != (my_tablen(map) - 1) && stt.x != (my_strlen(map[0]) - 1)) {
        if (list_len(&stt) != 0) {
            fcnt = create_list(fcnt, stt);
            stt.map = create_path(&stt, fcnt);
            put_in_list(&list, stt.y, stt.x, 0);
        }
        else if (list != NULL) {
            stt.map[stt.y][stt.x] = '.';
            remove_frst_elem(&list);
            give_new_pos(&stt, list);
        }
        else {
            my_putstr("no solution found\n");
            return;
        }
    }
    final_solver(map, stt);
}
