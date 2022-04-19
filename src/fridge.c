/*
** EPITECH PROJECT, 2022
** fridge
** File description:
** fridge
*/

#include "fridge.h"

void disp_fridge(fridge_t *f)
{
    for (int i = 0; f->ing[i]; i++) {
        printf("%s = %i\n", f->ing[i], f->nb_ing[i]);
    }
}

void addtofridge(fridge_t *f, char *ingredient, int const toadd)
{
    int i = 0;

    for (i = 0; f->ing[i]; i++) {
        if (my_strcmp(f->ing[i], ingredient)) {
            f->nb_ing[i] += toadd;
            return;
        }
    }
    printf("'addToFridge %s %i': Invalid operation\n", ingredient, toadd);
}

void free_all(fridge_t *f)
{
    free(f->nb_ing);
    free_double_array(f->ing);
    free(f->term);
    free(f);
}

int nb_line(char **darray)
{
    int i = 0;

    for (i = 0; darray[i]; i++);
    return (i);
}
