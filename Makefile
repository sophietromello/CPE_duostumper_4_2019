##
## EPITECH PROJECT, 2019
## undefined
## File description:
## Makefile
##

MAIN	=	main.c

SRC	=	str_to_word_array.c	\
		mix_word.c			\

TESTS	=	main.c

OBJ	=	$(MAIN:.c=.o) $(SRC:.c=.o)

OBJ_TESTS =	$(SRC:.c=.o) $(TESTS:.c=.o)

NAME	=	mixword

CC = gcc

CFLAGS	=	-W -Wall -I./include -Wextra -g3 -Wno-unused-result

CFLAGS_TESTS	=	--coverage -lcriterion

CFLAGS_DEBUG = -g3

all:	compile

debug:	compile_debug

compile:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

compile_debug:	CFLAGS += $(CFLAGS_DEBUG)

compile_debug:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) -f $(OBJ)

fclean:	clean
	$(RM) -f $(NAME)

re:	fclean all
