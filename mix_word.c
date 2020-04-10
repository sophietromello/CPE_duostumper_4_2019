/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** mix_word.c
*/

#include "stumper.h"

int mix_word(void)
{
    return (0);
}

int print_map_border_player1(navy_t *nav, char **av)
{
    int nb_line = 8;

    if (fs_open_map_game_for_player_1(nav, av[1]) == NULL)
        return (84);
    map_game_array(nav);
    return (0);
}

void create_map(navy_t *nav)
{
    int column = 0;

    nav->map_game.map = malloc(sizeof(char *) * 9);
    for (; column < 9; column += 1) {
        nav->map_game.map[column] = malloc(sizeof(char) * 10);
    }
    nav->map_game.map[8] = NULL;
    for (int i = 0; nav->map_game.map[i] != NULL; i += 1) {
        for (int j = 0; j <= 7; j += 1)
            nav->map_game.map[i][j] = '.';
        nav->map_game.map[i][8] = '\n';
        nav->map_game.map[i][9] = '\0';
    }
}

void print_in_map_player1(navy_t *nav, int line)
{
    int column = 0;

    line = 0;
    for (; column < 8; column += 1) {
        for (; line < 8; line += 1) {
            my_printf("%c", nav->map_game.map[line][column]);
            my_putchar(' ');
        }
    }
    my_putstr("\n");
}