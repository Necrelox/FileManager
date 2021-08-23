/*
**
** Made by Necrelox
** Login   <necrelox@gmail.com>
**
** Started on  Mon Aug 23 15:03:40 2021 Necrelox
** Last update Tue Aug 23 15:37:50 2021 Necrelox
*/

#include "file_structure.h"

file_s *file_storage_getset(short action, void *file)
{
    static file_s *storefile = NULL;
    if (action == -2021)
        storefile = (file_s *)file;
    else if (action == 2021)
        return storefile;
    return NULL;
}