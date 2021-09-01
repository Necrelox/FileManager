/*
**
** Made by Necrelox
** Login   <necrelox@gmail.com>
**
** Started on  Mon Aug 23 15:38:38 2021 Necrelox
** Last update Mon Aug 23 15:38:38 2021 Necrelox
*/

#include "file_structure.h"
#include <stdlib.h>
#include <string.h>

file_s *file_open(const char *path)
{
    file_s *file = malloc(sizeof(*file));
    if (!(file->path = strndup(path, strlen(path)))) {
        free(file);
        return NULL;
    }
    file->file = NULL;
    return file;
}