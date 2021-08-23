/*
**
** Made by Necrelox
** Login   <necrelox@gmail.com>
**
** Started on  Mon Aug 23 15:39:04 2021 Necrelox
** Last update Mon Aug 23 15:39:04 2021 Necrelox
*/

#include <unistd.h>

short file_check(const char *path, int what)
{
    return access(path, what);
}