#include "main.h"

/*
  * print_char
  */
void print_char(void *arg)
{
	write(1, &arg, 1);
}

/*
  * print_string
  */
void print_string(void *arg)
{
	int len;
	char *str = (char *)arg;

	len = 0;
	while (str[len] != '\0')
		len++;

	write(1, str, len);
}

/*
  * print_digit
  */

/*
void print_digit(void *arg)
{
	int reversed;
	int number = *(int*) arg;

	printf("test1\n");
	printf("%d\n", number);
	printf("test2\n");

	while (number != 0)
	{
		printf("while\n");
		reversed = (reversed * 10) + (number % 10);

		number = number / 10;
	}
	printf("end while\n");

	printf("%d\n", reversed);
	printf("last print\n");
}
*/
void recursive_print_digit(int number)
{
	char n;

	if (number == 0)
		return;

	recursive_print_digit(number / 10);

	n = '?';
	if (number % 10 <= 9)
		n = '0' + (number % 10);

	write(1, &n, 1);
}

void print_digit(void *arg)
{
	char n;
	int number;

	if (arg == NULL)
		return;

	number = *(int *)arg;

	if (number == 0)
	{
		n = '0';
		write(1, &n, 1);

		return;
	}

	recursive_print_digit(number);
}
