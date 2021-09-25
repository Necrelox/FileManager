/*
**
** Made by Necrelox
** Login   <necrelox@gmail.com>
**
** Started on  Mon Aug 23 15:03:13 2021 Necrelox
** Last update Tue Aug 23 15:03:16 2021 Necrelox
*/

#include "file_manager.h"
#include <stdlib.h>

size_t file_search(file_s *file, size_t pos, const char *wantbyte, size_t wantbytesize)
{
    file->file = fopen(file->path, "r");
    if (!file->file)
        return -1;
    fseek(file->file, 0, SEEK_END);
    size_t size = ftell(file->file);
    if (size < pos) {
        fclose(file->file);
        return -1;
    }
    fseek(file->file, pos, SEEK_SET);

    char bf[1];
    for (size_t i = 0, j = 0; i < size ; ++i) {
        fread(bf, 1, 1, file->file);
        int keeppos = ftell(file->file);
        for (j = 0; bf[0] == wantbyte[j] && j < wantbytesize; ++j)
            fread(bf, 1, 1, file->file);
        if (j == wantbytesize) {
            fclose(file->file);
            return keeppos;
        }
    }
    fclose(file->file);
    return -1;
}