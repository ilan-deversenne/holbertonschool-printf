#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

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
	void (*func)(void *);
} ftype;

void (*get_format(char *s))(void *);

int count(char *formats);
void _printf(char *formats, ...);

void print_char(void *arg);
void print_string(void *arg);
void print_digit(void *n);

#endif
