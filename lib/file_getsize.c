/*
**
** Made by Necrelox
** Login   <necrelox@gmail.com>
**
** Started on  Mon Aug 23 15:38:52 2021 Necrelox
** Last update Mon Aug 23 15:38:52 2021 Necrelox
*/

#include "file_structure.h"

size_t file_getsize(file_s *file)
{
    file->file = fopen(file->path, "r");
    if (!file->file)
        return -1;
    fseek(file->file, 0, SEEK_END);
    size_t size = ftell(file->file);
    fclose(file->file);
    return size;
}