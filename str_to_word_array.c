/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** str_to_word_array.c
*/

#include "stumper.h"

char **str_to_word_array(char *str, char c)
{
    // int i = 0;
    int j = 0;
    int b = 0;
    int nb_line = backslash(str, c);
    char **buffer = malloc(sizeof(char *) * (nb_line + 1));

    for (int i = 0 ;str[i] != '\0'; i += 1) {
        if (str[i] == c) {
            buffer[j][b] = '\0';
            b = 0;
            j += 1;
            i += 1;
        }
        if (b == 0)
            buffer[j] = malloc(sizeof(char) * 100);
        buffer[j][b] = str[i];
        b += 1;
        // i += 1;
    }
    buffer[j][b] = '\0';
    buffer[j + 1] = NULL;
    return (buffer);
}

int backslash(char *str, char c)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] == c) {
            count += 1;
        }
        i += 1;
    }
    return (count + 1);
}