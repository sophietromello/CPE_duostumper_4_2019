/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2019
** File description:
** stumper.h
*/

#ifndef _DUO_STUMPER_
#define _DUO_STUMPER_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <errno.h>
#include <string.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

typedef struct mix_s
{
    int size;
} mix_t;

int mix_word(void);
char *fs_open_file(char const *filepath);

#endif /*_DUO_STUMPER_*/