#include "main.h"

int _printf(char *formats, ...)
{
	int index;
	va_list args;
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

			index += 2;
			continue;
		}

		character = formats[index];
		write(1, &character, 1);

		index++;
	}

	va_end(args);

	return (0);
}
