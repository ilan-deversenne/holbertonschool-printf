#include <stdlib.h>
#include <stdarg.h>
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
	void (*func)(char *);
} ftype;

void (*get_format(char *s))(char *);

int count(char *formats);
void _printf(char *formats, ...);

void format_string(char *formats);

#endif
