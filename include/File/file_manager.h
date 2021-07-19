//
// Created by ruby on 2021-07-19.
//

#ifndef FILEMANAGER_FILE_MANAGER_H
#define FILEMANAGER_FILE_MANAGER_H

#include "file_structure.h"

enum what {EXIST = 0, READ = 4, WRITE = 2, EXEC = 1};

////////////////////////////////////////////////////////////
///
/// \date 19/07/21
///
/// \fn short file_check(const char *path, int what);
///
/// \brief check file acces Exist/Read/Write/Exec
///
/// \param[in] path you want to check
/// \param[in] what EXIT = 0, READ = 4, WRITE = 2, EXEC = 1
///
/// \return 0 if all is good else -1
///
////////////////////////////////////////////////////////////
short file_check(const char *path, int what);

////////////////////////////////////////////////////////////
///
/// \date 19/07/21
///
/// \fn file_s *file_create(const char *name);
///
/// \brief create file structure and create file
///
/// \param[in] name its name of file you can give path with name (path/name)
///
/// \return stucture file_s if all is good else NULL
///
////////////////////////////////////////////////////////////
file_s *file_create(const char *name);

////////////////////////////////////////////////////////////
///
/// \date 19/07/21
///
/// \fn int file_open(file_s **file);
///
/// \brief open file (before use file_create)
///
/// \param[in, out] file structure contain the path you want open
///
/// \return 0 if all is good else return -1
///
////////////////////////////////////////////////////////////
int file_open(file_s **file);

////////////////////////////////////////////////////////////
///
/// \date 19/07/21
///
/// \fn int file_close(file_s **file);
///
/// \brief close file (before use file_create and file_open)
///
/// \param[in] file structure with the file
///
/// \return 0 if all is good else return -1
///
////////////////////////////////////////////////////////////
int file_close(file_s **file);

////////////////////////////////////////////////////////////
///
/// \date 19/07/21
///
/// \fn void file_struct_destroy(file_s *file, short keep);
///
/// \brief destroy the structure and can remove file if keep set to 0
///
/// \param[in] file the structure
/// \param[in] keep if keep is set to 0 the file is removed
///
/// \return 0 if all is good else return -1
///
////////////////////////////////////////////////////////////
void file_struct_destroy(file_s *file, short keep);

////////////////////////////////////////////////////////////
///
/// \date 19/07/21
///
/// \fn int file_append(file_s *file, const char *strappend);
///
/// \brief append a string in the file
///
/// \param[in] structure file
/// \param[in] strappend string you want append in file
///
/// \return 0 if all is good else return -1
///
////////////////////////////////////////////////////////////
int file_append(file_s *file, const char *strappend);


#endif //FILEMANAGER_FILE_MANAGER_H
