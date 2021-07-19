/*
** EPITECH PROJECT, 2021
** file_open
** File description:
** file_open
*/

#include "file_structure.h"

int file_open(file_s **file)
{
    (*file)->file = fopen((*file)->path, "a");
    if (!(*file)->file)
        return -1;
    return 0;
}