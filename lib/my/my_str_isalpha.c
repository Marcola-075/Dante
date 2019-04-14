/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** fct
*/

#include <stddef.h>

int    my_str_isalpha(char const *str)
{
    int a = 0;

    if (str == NULL || str == "")
        return (1);
    while (str[a] != '\0') {
        if (str[a] <= 'a' && str[a] >= 'z' || str[a] <= 'A' && str[a] >= 'Z')
            return (0);
        else
            return (1);
        a = a + 1;
    }
}
