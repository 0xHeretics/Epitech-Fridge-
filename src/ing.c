/*
** EPITECH PROJECT, 2022
** ingredient.c
** File description:
** ifndsf
*/

#include "fridge.h"

char *ingredient_2(char *name_ing)
{
    my_strcat(&name_ing, "onion");
    my_strcat(&name_ing, " ");
    my_strcat(&name_ing, "pasta");
    my_strcat(&name_ing, " ");
    return (name_ing);
}
