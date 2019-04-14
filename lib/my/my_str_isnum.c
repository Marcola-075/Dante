/*
** EPITECH PROJECT, 2018
** my_str_isnum
** File description:
** fct
*/

#include <stddef.h>

int    my_str_isnum(char const *str)
{
    int    a = 0;
    int    b = 1;

    if (str == NULL || str == "")
        return (1);
    if (str[0] == '-')
        a = 1;
    while (str[a] != '\0') {
        if (str[a] >= '0' && str[a] <= '9')
            b = b * 1;
        else
            b = b + 1;
        a = a + 1;
    }
    if (b == 1)
        return (1);
    else
        return (0);
}
