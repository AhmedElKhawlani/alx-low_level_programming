#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: EL KHAWLANI Ahmed
 * Desc: Header file containing prototypes for all functions
 *       required to do the project 0x15
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
