# printf

This project is a custom implementation of the standard C library function `printf`, created as part of the Holberton School curriculum.  
It aims to teach variadic functions, format parsing, and manual output using `write`.

## Description

The `_printf` function formats and prints data to the standard output according to a format string.
It supports a limited set of conversion specifiers and mimics part of the behavior of the standard `printf`.

## Supported Specifiers

- %c : print a character
- %s : print a string
- %% : print a percent sign

## Not Implemented

The following features are not required and therefore not implemented:
- Flags (+, -, 0, #, space)
- Field width
- Precision
- Length modifiers
- Complete buffering like standard printf

## Prototype

int _printf(const char *format, ...);

## Return Value

- Number of characters printed (excluding null byte)
- -1 if an error occurs

## Requirements

- Ubuntu 20.04 LTS
- Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
- Betty style mandatory
- No global variables
- Max 5 functions per file
- All prototypes in main.h

## Example Usage

_printf("Character: %c\n", 'A');
_printf("String: %s\n", "Holberton");
_printf("Percent: %%\n");

## Repository

GitHub repository: holbertonschool-printf
EOF
