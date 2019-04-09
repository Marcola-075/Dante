/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    int perfect = 0;
    
    if (ac == 2 && my_strcmp("-h", av[1]) == 0)
        return (0);
    if (check_nbr(ac, av) == 84)
        return (84);
    if (ac == 4) {
        if (strcmp("[perfect]", av[3]) == 0)
            perfect = 1;
        else {
            write(2, "Error: the last flag should be empty or [perfect].\n", 51);
            return (84);
        }
    }
    my_gen(my_getnbr(av[1]), my_getnbr(av[2]), perfect);
    return (0);
}
