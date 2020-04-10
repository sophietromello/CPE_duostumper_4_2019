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

typedef struct crocus_s
{
    int boulean_0;
    int boulean_1;
    int boulean_2;
    int boulean_3;
    int boulean_4;
    int boulean_5;
    int boulean_6;
    int boulean_7;
    int boulean_8;
    int boulean_9;
    char c;
} crocus_t;

int crocus_n(int ac, char **av, crocus_t *crocus);
void init_boulean(crocus_t *crocus);
void fonction_zero(crocus_t *crocus);
void fonction_one(crocus_t *crocus);

#endif /*_DUO_STUMPER_*/