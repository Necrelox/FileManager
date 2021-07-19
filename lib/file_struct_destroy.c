/*
** EPITECH PROJECT, 2021
** file_struct_destroy
** File description:
** file_struct_destroy
*/

#include "file_structure.h"

void file_struct_destroy(file_s *file, short keep)
{
    if (keep == 0)
        remove(file->path);
    free(file->path);
    if (file->file)
        fclose(file->file);
    free (file);
}