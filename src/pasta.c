/*
** EPITECH PROJECT, 2022
** pasta
** File description:
** pasta
*/

#include "fridge.h"

int make_pasta(fridge_t *f)
{
    f->nb_ing[0] < 5 ?
        my_puterror("'make pasta': not enough tomato\n") : 0;
    if (f->nb_ing[3] < 2)
        my_puterror("'make pasta': not enough pasta\n");
    if (f->nb_ing[4] < 6)
        my_puterror("'make pasta': not enough olive\n");
    if (f->nb_ing[6] < 4)
        my_puterror("'make pasta': not enough ham\n");
    if (f->nb_ing[7] < 3)
        my_puterror("'make pasta': not enough cheese\n");
    f->nb_ing[0] -= 5;
    f->nb_ing[3] -= 2;
    f->nb_ing[4] -= 6;
    f->nb_ing[6] -= 4;
    f->nb_ing[7] -= 3;
    return (0);
}
