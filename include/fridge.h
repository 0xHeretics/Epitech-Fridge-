/*
** EPITECH PROJECT, 2022
** my_essential
** File description:
** fridge
*/

#ifndef FRIDGE_H_
    #define FRIDGE_H_
    #include "my.h"

typedef struct fridge_s {
    char *term;
    size_t size_term;
    char **d_array;
    char **ing;
    int *nb_ing;
    int nb_arg;
} fridge_t;

#endif

void disp_fridge(fridge_t *f);
void free_all(fridge_t *f);
int nb_line(char **darray);
void addtofridge(fridge_t *f, char *ingredient, int toadd);
int make_pizza(fridge_t *f);
int make_pasta(fridge_t *f);
int save(fridge_t *f);
int arg_handler_2(fridge_t *f);
void parser(fridge_t *f, char *file);
char **my_stwa_bis(char *str);
char *ingredient_2(char *name_ing);
