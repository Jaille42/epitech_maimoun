/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** include for days
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_struct
{
	int i;
} t_struct;

typedef struct s_list
{
	int z;
	struct s_list *next;
} t_list;

typedef struct s_mommy
{
    t_list *la;
    t_list *lb;
} t_mommy;