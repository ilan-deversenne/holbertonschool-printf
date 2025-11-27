#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#ifndef MAIN_H
#define MAIN_H

/**
 * struct formats - Struct formats
 *
 * @format: The format (%)
 * @f: The function associated
 */
typedef struct formats
{
	char *format;
	int (*func)(void *);
} ftype;

int (*get_format(char *s))(void *);

char *_strncpy(char *dest, char *src, int n);

int _printf(char *formats, ...);

int print_char(void *arg);
int print_string(void *arg);
int print_digit(void *n);

#endif
