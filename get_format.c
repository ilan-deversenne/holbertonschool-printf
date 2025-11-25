#include "main.h"

void (*get_format(char *s))(char *)
{
	int index;

	ftype format_funcs[] = {
		{"c", format_string},
		{"s", format_string},
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
