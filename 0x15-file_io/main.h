#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>


int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);
void check97(int argc);
void check98(ssize_t check, char *file, int fd_from, int fd_to);
void check99(ssize_t check, char *file, int fd_from, int fd_to);
void check100(int check, int fd);
int main(int argc, char **argv)


#endif
