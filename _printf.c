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
	int index, length;
	void (*call)(char *);

	length = count(formats);
	va_start(args, formats);

	index = 0;
	while (*(formats + index) != '\0')
	{
		if (*(formats + index) == '%')
		{
			/*
				*(formats + index + 1)

				Est notre format le charactère après "%"

				Fix: Prend tout se qu'il y'a après le %

			*/

			call = get_format(formats + index + 1);
			if (call != NULL)
				call(va_arg(args, void *));
			else
				printf("call: NULL\n"); /* DEBUG */

			index += 2;
			continue;
		}

		index++;
	}

	va_end(args);
	printf("%d\n", length);
}
