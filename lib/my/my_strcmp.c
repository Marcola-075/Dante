/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** strcmp
*/

int my_putstr(char const *str);

int str_first(char const *sone)
{
    int c = 0;
    int number;

    while (sone[c] != '\0') {
        number = sone[c] + 48;
        c = c + 1;
    }
    return (number);
}

int str_second(char const *stwo)
{
    int c = 0;
    int number;

    while (stwo[c] != '\0') {
        number = stwo[c] + 48;
        c = c + 1;
    }
    return (number);
}

int my_strcmp(char const *sone, char const *stwo)
{
    int out;

    out = str_first(sone) - str_second(stwo);
}
