#include "main.h"

int (*get_format(char *s))(void *)
{
	int index;

	ftype format_funcs[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_digit},
		{NULL, NULL}
	};

	index = 0;
	while (format_funcs[index].format != NULL)
	{
		if (s[0] == format_funcs[index].format[0])
		{
			return (format_funcs[index].func);
		}

		index++;
	}

	return (NULL);
}
