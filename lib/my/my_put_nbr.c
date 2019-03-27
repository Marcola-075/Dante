/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** print NB
*/

void    my_putchar(char c);

int    my_put_nbr(int nb)
{
    int    div = 1;
    int    c;

    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    while (nb / div >= 10)
        div = div * 10;
    while (div > 0) {
        c = (nb / div) % 10;
        my_putchar(c + 48);
        div = div / 10;
    }
}
