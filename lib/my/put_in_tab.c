/*
** EPITECH PROJECT, 2019
** putintab
** File description:
** putintab
*/

#include <stdlib.h>

char *clean_str(char *str);

int len_of_tab(char *str, char sep)
{
    int len = 1;
    int i = 0;

    if (str == NULL || str[0] == '\0')
        return (0);
    while (str[i] != '\0') {
        if (str[i] == sep)
            len = len + 1;
        i = i + 1;
    }
    return (len);
}

int len_of_line(char *str, char sep, int pos)
{
    int len = 2;

    while (str[pos] != '\0' && str[pos] != sep) {
        if (str[pos] != '\n')
            len = len + 1;
        pos = pos + 1;
    }
    return (len);
}

char **clean_tab(char **tab, char sep, int i)
{
    int len = 0;
    int y = 0;
    char **out;

    while (tab[i] != NULL) {
        tab[i] = clean_str(tab[i]);
        if (tab[i][0] != '\0')
            len = len + 1;
        i = i + 1;
    }
    i = 0;
    out = malloc(sizeof(char *) * (len + 1));
    while (tab[i] != NULL) {
        if (tab[i][0] != '\0') {
            out[y] = tab[i];
            y = y + 1;
        }
        i = i + 1;
    }
    out[y] = NULL;
    return (out);
}

char **put_in_tab(char *str, char sep)
{
    int y = 0;
    int j = 0;
    char **tab = malloc(sizeof(char *) * ((len_of_tab(str, sep) + 1)));

    tab[y] = malloc(sizeof(char) * len_of_line(str, sep, 0));
    for (int i = 0 ; str[i] != '\0' ;) {
        if (str[i] == sep) {
            tab[y][j] = '\0';
            j = 0 + (0 * (y += 1)) + (0 * (i += 1));
            tab[y] = malloc(sizeof(char) * len_of_line(str, sep, i));
        }
        if (str[i] != '\0' && str[i] != '\n') {
            tab[y][j] = str[i];
            i += 1 + (0 * (j += 1));
        }
        else
            i++;
    }
    tab[y][j] = 0;
    tab[y + 1] = NULL;
    return (clean_tab(tab, sep, 0));
}
