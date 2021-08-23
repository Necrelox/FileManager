/*
**
** Made by Necrelox
** Login   <necrelox@gmail.com>
**
** Started on  Mon Aug 23 15:03:35 2021 Necrelox
** Last update Tue Aug 23 15:37:55 2021 Necrelox
*/

#include "file_structure.h"
#include <stdlib.h>

void file_struct_destroy(file_s *file, short keep)
{
    if (keep == 0)
        remove(file->path);
    free(file->path);
    free (file);
}