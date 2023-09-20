#include "main.h"
/**
 * putoct - prints the octal representation of an integer
 * and return len
 * @args: acceot the list of type va_list
 * Return: the length of the octal representation
 */
int putoct(va_list args)
{
	unsigned int num;
	int len, i, j;
	char buffer[12] = {0};

	j = 0;
	num = va_arg(args, unsigned int);
	i = 0;
	len = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num != 0)
	{
		buffer[i++] = (num % 8) + '0';
		num /= 8;
	}
	len += i;
	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
	return (len);
}
