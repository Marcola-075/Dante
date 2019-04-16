/*
** EPITECH PROJECT, 2019
** my_cat
** File description:
** my_cat
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int my_strlen(char *str);

char *add_str(char *one, char *two)
{
    char *out = malloc(sizeof(char) * (my_strlen(one) + my_strlen(two) + 1));
    int i = 0;
    int y = 0;

    while (one[i] != '\0') {
        out[i] = one[i];
        i++;
    }
    while (two[y] != '\0') {
        out[i] = two[y];
        y++;
        i++;
    }
    out[i] = '\0';
    return (out);
}

char *my_cat(char *filepath)
{
    int a = 0;
    int rd = 1;
    char *out = "";
    char buff[2];

    if (filepath == NULL)
        return (NULL);
    a = open(filepath, O_RDONLY);
    if (a < 0)
        return (NULL);
    while ((rd = read(a, buff, 1)) != 0) {
        if (rd == 0) {
            close(a);
            return (out);
        }
        buff[rd] = '\0';
        out = add_str(out, buff);
    }
    close(a);
    return (out);
}
