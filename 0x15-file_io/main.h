#ifndef MAIN_H
#define MAIN_H
#define REV ( n ) ((n << 24 ) | (((n >> 16 ) << 24 ) >> 16 ) | \
(((n << 16 ) >> 24 ) << 16 ) | (n >> 24 ))
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
