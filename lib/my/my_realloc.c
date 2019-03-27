/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** get_next_line
*/

#include <stddef.h>
#include <stdlib.h>

int    my_strlen(char const *str);

char *my_realloc(char *str, char *str_two, int i, int y)
{
    char *out;

    if (str == NULL && str_two == NULL)
        return (NULL);
    if (str == NULL)
        return (str_two);
    if (str_two == NULL)
        return (str);
    out = malloc(sizeof(char) * (my_strlen(str) + my_strlen(str_two) + 1));
    while (str[i] != '\0') {
        out[i] = str[i];
        i = i + 1;
    }
    while (str_two[y] != '\0') {
        out[i] = str_two[y];
            i = i + 1;
            y = y + 1;
    }
    out[i] = '\0';
    return (out);
}
