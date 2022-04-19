/*
** EPITECH PROJECT, 2022
** error
** File description:
** error
*/

#include "fridge.h"

int arg_handler_2(fridge_t *f)
{
    if (f->nb_arg == 2 && my_strcmp(f->d_array[0], "make")) {
        if (my_strcmp(f->d_array[1], "pizza"))
            make_pizza(f);
        else if (my_strcmp(f->d_array[1], "pasta"))
            make_pasta(f);
        else {
            my_putstr("'");
            my_putstr(f->d_array[1]);
            my_putstr("': meal unknown\n");
        }
    } else {
        printf("'");
        for (int i = 0; i < my_strlen(f->term) - 1; i++)
            printf("%c", f->term[i]);
        printf("': Invalid operation\n");
    }
    return (0);
}
