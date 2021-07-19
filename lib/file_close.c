/*
** EPITECH PROJECT, 2021
** file_close
** File description:
** file_close
*/

#include "file_structure.h"

int file_close(file_s **file)
{
    if (fclose((*file)->file))
        return -1;
    return 0;
}