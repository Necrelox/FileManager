/*
** EPITECH PROJECT, 2021
** file_insert
** File description:
** file_insert
*/

#include "file_structure.h"
#include <string.h>

int file_insert(file_s *file, size_t pos, const char *strinsert)
{
    file->file = fopen(file->path, "r+b");
    if (!file->file)
        return -1;
    fseek(file->file, pos, SEEK_SET);
    fputs(strinsert, file->file);
    fclose(file->file);
    return 0;
}
