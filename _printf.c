#include "main.h"

int _printf(char *formats, ...)
{
	int index;
	int length;
	va_list args;
	char character;
	int (*call)(void *);

	index = 0;
	length = 0;

	va_start(args, formats);

	while (*(formats + index) != '\0')
	{
		if (*(formats + index) == '%')
		{
			call = get_format(formats + index + 1);
			if (call != NULL)
				length += call(va_arg(args, void *));

			index += 2;
			continue;
		}

		character = formats[index];
		write(1, &character, 1);

		index++;
		length++;
	}

	va_end(args);

	return (length);
}
