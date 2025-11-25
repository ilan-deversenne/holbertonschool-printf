#include "main.h"

int count(char *formats)
{
	int index, length;

	index = 0;
	length = 0;
	while (*(formats + index) != '\0')
	{
		if (*(formats + index) == '%')
		{
			/*call = get_format(formats + i);
			if (call != NULL) */

			index += 2;
			continue;
		}

		index++;
		length++;
	}

	return (length);
}

void _printf(char *formats, ...)
{
	va_list args;
	int index;
	char character;
	void (*call)(void *);

	va_start(args, formats);

	index = 0;
	while (*(formats + index) != '\0')
	{
		if (*(formats + index) == '%')
		{
			call = get_format(formats + index + 1);
			if (call != NULL)
				call(va_arg(args, void *));
			else
				printf("call: NULL\n"); /* DEBUG */

			index += 2;
			continue;
		}

		character = formats[index];
		write(1, &character, 1);

		index++;
	}

	va_end(args);
}
