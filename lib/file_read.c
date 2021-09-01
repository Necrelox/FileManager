/*
**
** Made by Necrelox
** Login   <necrelox@gmail.com>
**
** Started on  Mon Aug 23 15:38:32 2021 Necrelox
** Last update Mon Aug 23 15:38:32 2021 Necrelox
*/

#include "file_structure.h"
#include <stdlib.h>

char *file_read(file_s *file, size_t size, size_t pos)
{
    file->file = fopen(file->path, "r");
    if (!file->file)
        return NULL;
    fseek(file->file, 0, SEEK_END);
    size_t fsize = ftell(file->file);
    if (fsize < pos) {
        fclose(file->file);
        return -1;
    }
    fseek(file->file, pos, SEEK_SET);
    char *buff = malloc(sizeof(char) * size + 1);
    fread(buff, size, 1, file->file);
    buff[size] = 0;
    fclose(file->file);
    return buff;
}