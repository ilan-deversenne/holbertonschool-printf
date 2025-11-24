#include <stdlib.h>
#include <stdarg.h>

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
    char (*func)(char text);
} ftype;

#endif
