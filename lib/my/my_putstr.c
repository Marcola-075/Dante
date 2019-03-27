/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** putstr
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        my_putchar(str[c]);
        c = c + 1;
    }
}
