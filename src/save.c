/*
** EPITECH PROJECT, 2022
** save
** File description:
** save
*/

#include "fridge.h"

int save(fridge_t *f)
{
    char *to_write = malloc(sizeof(char));
    char *tmp = NULL;

    if (to_write == NULL)
        return (84);
    to_write[0] = '\0';
    for (int i = 0; f->ing[i]; i++) {
        tmp = my_itoa(f->nb_ing[i]);
        my_strcat(&to_write, f->ing[i]);
        my_strcat(&to_write, " = ");
        my_strcat(&to_write, tmp);
        my_strcat(&to_write, "\n");
        free(tmp);
    }
    write_in_file(".save", to_write);
    free (to_write);
    return (0);
}
