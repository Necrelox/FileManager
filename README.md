# FileManager

## Présentation :

Cette librairie vous permet d'accéder à plusieurs fonction pour créer/gérer un fichier.

Elle a pour but de vous faire gagner du temps.

## Comment l'utiliser :

```shell
mkdir build && cd build && cmake .. && make re
```

Vous obtiendrai une librairie **STATIC**.

Il vous suffira seulement de la link à la compilation.

## Différentes fonctions de la lib

**file_create**

| Return   | Parameters                                | Description                             |
| -------- | ----------------------------------------- | --------------------------------------- |
| file_s * | const char *name (nom du fichier à créer) | Crée un fichier et une structure file_s |

**file_open**

| Return   | Parameters                                            | Description               |
| -------- | ----------------------------------------------------- | ------------------------- |
| file_s * | const char *name (nom du fichier à garder en mémoire) | Crée une structure file_s |

**file_struct_destroy**

| Return | Parameters                                            | Description                          |
| ------ | ----------------------------------------------------- | ------------------------------------ |
| void   | file_s *file, short keep(0 pour supprimer le fichier) | Libère la mémoire utilisé par file_s |

**file_check**

| Return | Parameters                                                           | Description                   |
| ------ | -------------------------------------------------------------------- | ----------------------------- |
| short  | const char *path, int what(EXIST = 0, READ = 4, WRITE = 2, EXEC = 1) | permet de vérifier un fichier |

**file_getsize**

| Return | Parameters   | Description                                          |
| ------ | ------------ | ---------------------------------------------------- |
| size_t | file_s *file | récupère la taille du fichier dans la structure file |

**file_storage_getset**

| Return   | Parameters                                      | Description                                                          |
| -------- | ----------------------------------------------- | -------------------------------------------------------------------- |
| file_s * | short action (FILE_GET ou FILE_SET), void *file | stocker la structure file_s et retrouvez là partout et à tout moment |

**file_append**

| Return | Parameters                          | Description                                      |
| ------ | ----------------------------------- | ------------------------------------------------ |
| int    | file_s *file, const char *strappend | ajoute strappend à la fin du contenue du fichier |

**file_append_bytes**

| Return | Parameters                                        | Description                                                  |
| ------ | ------------------------------------------------- | ------------------------------------------------------------ |
| *      | file_s *file, const char *byteappend, size_t size | ajoute les octets byteappend à la fin du contenue du fichier |

**file_insert**

| Return | Parameters                                      | Description                                            |
| ------ | ----------------------------------------------- | ------------------------------------------------------ |
| int    | file_s *file, size_t pos, const char *strinsert | insère à une position donné strinsert dans le fichier. |

**file_read**

| Return | Parameters                            | Description                                                           |
| ------ | ------------------------------------- | --------------------------------------------------------------------- |
| char * | file_s *file, size_t size, size_t pos | lis le contenue du fichier de la taille ainsi qu'à la position donné. |

**file_search**

| Return   | Parameters                                                          | Description                                                                                                                |
| -------- | ------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------- |
| file_s * | file_s *file, size_t pos, const char *wantbyte, size_t wantbytesize | Cherche un champ d'octet dans le fichier à partir de la position donnée, si la le champ est trouvé il renvoie la position. |
