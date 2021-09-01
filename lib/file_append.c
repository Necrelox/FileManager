/*
**
** Made by Necrelox
** Login   <necrelox@gmail.com>
**
** Started on  Mon Aug 23 15:39:10 2021 Necrelox
** Last update Mon Aug 23 15:39:10 2021 Necrelox
*/


#include "file_structure.h"
#include <string.h>

int file_append_bytes(file_s *file, const char *byteappend, size_t size)
{
    file->file = fopen(file->path, "a");
    if (!file->file)
        return -1;
    fseek(file->file, 0, SEEK_END);
    if (byteappend) {
        if (fwrite(byteappend, size, 1, file->file) > size - 1)
            return -1;
    }
    fclose(file->file);
    return 0;
}

int file_append(file_s *file, const char *strappend)
{
    file->file = fopen(file->path, "a");
    if (!file->file)
        return -1;
    fseek(file->file, 0, SEEK_END);
    if (fwrite(strappend, strlen(strappend), 1, file->file) > strlen(strappend)-1)
        return -1;
    fseek(file->file, 0, SEEK_SET);
    fclose(file->file);
    return 0;
}