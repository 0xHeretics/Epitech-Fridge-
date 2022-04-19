/*
** EPITECH PROJECT, 2022
** make
** File description:
** make
*/

#include "fridge.h"

static int make_pizza_bis(fridge_t *f)
{
    if (f->nb_ing[0] < 5)
        return (my_puterror("'make pizza': not enough tomato\n"));
    if (f->nb_ing[1] < 1)
        return (my_puterror("'make pizza': not enough dough\n"));
    if (f->nb_ing[2] < 3)
        return (my_puterror("'make pizza': not enough onion\n"));
    return (0);
}

int make_pizza(fridge_t *f)
{
    make_pizza_bis(f);
    if (f->nb_ing[4] < 8)
        return (my_puterror("'make pizza': not enough olive\n"));
    if (f->nb_ing[5] < 8)
        return (my_puterror("'make pizza': not enough pepper\n"));
    if (f->nb_ing[6] < 4)
        return (my_puterror("'make pizza': not enough ham\n"));
    if (f->nb_ing[7] < 3)
        return (my_puterror("'make pizza': not enough cheese\n"));
    f->nb_ing[0] -= 5;
    f->nb_ing[1] -= 1;
    f->nb_ing[2] -= 3;
    f->nb_ing[4] -= 8;
    f->nb_ing[5] -= 8;
    f->nb_ing[6] -= 4;
    f->nb_ing[7] -= 3;
    return (0);
}
