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

	char *str = (char *) arg;

	len = 0;

	while (str[len] != '\0')
	{
			
			len++;
			write(1, str, len);
	}
}

/*
  * print_digit
  */
void print_digit(int n)
{
	int reversed;

	printf("%d\n", n);

	while (n < 9)
	{
		reversed = (reversed * 10) + (n % 10);

		n = n / 10;
	}

	printf("%d\n", reversed);
}
