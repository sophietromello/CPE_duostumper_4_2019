/*
** EPITECH PROJECT, 2019
** CPE_duostumper_4_2019
** File description:
** main.c
*/

#include "stumper.h"

int main (int ac, char **av)
{
    mix_t mix;
    mix.size = 0;
    char *str = NULL;
    char **word = NULL;

    str = fs_open_file(av[1]);
    if (str == NULL)
        return (84);
    word = str_to_word_array(str, '\n');
    if (word == NULL)
        return (84);
    //call mix_word.c function
    free (str);
    for (int i = 0; word[i]; i += 1)
        free(word[i]);
    free(word);
    return (0);
}

char *fs_open_file(char const *filepath)
{
    char *str;
    int filedescriptor;
    struct stat s;

    filedescriptor = open(filepath, O_RDONLY);
    if (filedescriptor == -1) {
        write (2, "WARNING: No map found\n", 23);
        return (NULL);
    }
    stat(filepath, &s);
    if (s.st_size == 0) {
        write (2, "WARNING: Empty map\n", 20);
        return (NULL);
    }
    str = malloc(sizeof(char) * s.st_size + 1);
    read(filedescriptor, str, s.st_size);
    str[s.st_size] = '\0';
    return (str);
}