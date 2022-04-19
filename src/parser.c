/*
** EPITECH PROJECT, 2022
** parese
** File description:
** pars
*/

#include "fridge.h"

void parser(fridge_t *f, char *file)
{
    char **tmp = my_stwa_bis(file);
    int true_value = 0;

    for (int i = 1; tmp[i]; i++) {
        if (my_str_is_num(tmp[i])) {
            f->nb_ing[true_value] = atoi(tmp[i]);
            true_value++;
        }
    }
    free_double_array(tmp);
}
