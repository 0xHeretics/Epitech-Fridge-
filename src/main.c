/*
** EPITECH PROJECT, 2022
** my_essential
** File description:
** main
*/

#include "fridge.h"

static int ingredient(fridge_t *f)
{
    char *name_ing = malloc(sizeof(char));

    if (name_ing == NULL)
        return (84);
    name_ing[0] = '\0';
    my_strcat(&name_ing, "tomato");
    my_strcat(&name_ing, " ");
    my_strcat(&name_ing, "dough");
    my_strcat(&name_ing, " ");
    name_ing = ingredient_2(name_ing);
    my_strcat(&name_ing, "olive");
    my_strcat(&name_ing, " ");
    my_strcat(&name_ing, "pepper");
    my_strcat(&name_ing, " ");
    my_strcat(&name_ing, "ham");
    my_strcat(&name_ing, " ");
    my_strcat(&name_ing, "cheese");
    f->ing = my_stwa(name_ing);
    free(name_ing);
    return (1);
}

static int init_struct(fridge_t *f)
{
    char *have_file = NULL;

    f = my_memset(f, 0, sizeof(fridge_t));
    if (ingredient(f) == 84)
        return (84);
    f->nb_ing = malloc(sizeof(int) * (nb_line(f->ing)));
    if (f->nb_ing == NULL)
        return (84);
    for (int i = 0; i < nb_line(f->ing); i++)
        f->nb_ing[i] = 50;
    have_file = getline_file(".save");
    if (have_file != NULL) {
        parser(f, have_file);
        free (have_file);
    }
    return (0);
}

static int arg_handler(fridge_t *f)
{
    if (f->nb_arg == 2 && my_strcmp(f->d_array[0], "disp") &&
        my_strcmp(f->d_array[1], "fridge")) {
        disp_fridge(f);
        return (0);
    }
    if (f->nb_arg == 3 && my_strcmp(f->d_array[0], "addToFridge") &&
        my_str_is_num(f->d_array[2])) {
        addtofridge(f, f->d_array[1], my_atoi(f->d_array[2]));
        return (0);
    }
    if (f->nb_arg == 1 && my_strcmp(f->d_array[0], "exit"))
        return (1);
    arg_handler_2(f);
    return (0);
}

static void fridge(fridge_t *f)
{
    while (1) {
        if (getline(&f->term, &f->size_term, stdin) == - 1)
            break;
        if (f->term[0] == '\n')
            continue;
        f->nb_arg = count_words(f->term);
        f->d_array = my_stwa(f->term);
        if (arg_handler(f))
            break;
        free_double_array(f->d_array);
    }
}

int main(void)
{
    fridge_t *f = malloc(sizeof(fridge_t));
    int return_value = 0;

    if (f == NULL)
        return (84);
    return_value = init_struct(f);
    if (return_value == 84)
        return (84);
    fridge(f);
    if (save(f) == 84)
        return (84);
    free_all(f);
    return (0);
}
