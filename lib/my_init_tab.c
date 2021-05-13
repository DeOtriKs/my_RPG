/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** my_init_tab.c
*/

#include "../include/my_rpg.h"

char **my_init_char_tab(char **tab, int size, int size2)
{
    tab = malloc(sizeof(char *) * size);
    for (int i = 0; i < size; i++)
        tab[i] = malloc(sizeof(char) * size2);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size2; j++)
            tab[i][j] = '\0';
    }
    return (tab);
}

int **my_init_int_tab(int **tab, int size, int size2)
{
    tab = malloc(sizeof(int *) * size);
    for (int i = 0; i < size; i++)
        tab[i] = malloc(sizeof(int) * size2);
    return (tab);
}

void my_free_int_tab(int **tab, int size)
{
    for (int i = 0; i < size; i++) {
        free(tab[i]);
    }
    free(tab);
}

void my_free_char_tab(char **tab, int size)
{
    for (int i = 0; i < size; i++) {
        free(tab[i]);
    }
    free(tab);
}
