/*
**
** Made by Necrelox
** Login   <necrelox@gmail.com>
**
** Started on  Mon Aug 23 15:38:58 2021 Necrelox
** Last update Thu Sep 1 21:22:15 2021 Necrelox
*/

#include "file_structure.h"
#include <stdlib.h>
#include <string.h>

file_s *file_create(const char *name)
{
    file_s *file = malloc(sizeof(file_s));
    if (!file)
        return NULL;
    file->file = fopen(name, "w+");
    if (!file->file) {
        free(file);
        return NULL;
    } else if(fclose(file->file) != 0) {
        free(file);
        return NULL;
    }
    if (!(file->path = strndup(name, strlen(name)))) {
        free(file);
        return NULL;
    }
    file->file = NULL;
    return file;
}