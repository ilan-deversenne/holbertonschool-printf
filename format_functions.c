#include "main.h"

/*
  * print_char
  */
int print_char(void *arg)
{
	write(1, &arg, 1);

	return (1);
}

/*
  * print_string
  */
int print_string(void *arg)
{
	int len;
	char *str = (char *)arg;

	len = 0;
	while (str[len] != '\0')
		len++;

	write(1, str, len);

	return (len);
}

int recursive_print_digit(int number)
{
	char n;

	if (number == 0)
		return (0);

	recursive_print_digit(number / 10);

	n = '?';
	if (number % 10 <= 9)
		n = '0' + (number % 10);

	write(1, &n, 1);

	return (0);
}

/*
  * print_digit
  */
int print_digit(void *arg)
{
	char n;
	int number;

	if (arg == NULL)
		return (0);

	number = *(int *)arg;

	if (number == 0)
	{
		n = '0';
		write(1, &n, 1);

		return (0);
	}

	recursive_print_digit(number);

	return (0);
}
