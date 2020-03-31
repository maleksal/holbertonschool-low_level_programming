#ifndef H
#define H


#define CHECK_CALL(F) { if (F < 0) return (0); }

#include <unistd.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


ssize_t read_textfile(const char *filename, size_t letters);



#endif
