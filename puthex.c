#include "main.h"
/**
 * put_hex - prints the hexadecimal representation
 * of an integer
 * @args: list of arguements
 * Return: number of characters printed
 */
int put_hex(va_list args)
{
	unsigned int num;
	int len, i, rem;
	char buffer[20] = {0};

	num = va_arg(args, unsigned int);
	len = 0;
	i = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if ((int)num < 0)
	{
		num = ~(num - 1);
		_putchar('-');
		len++;
	}
	while (num != 0)
	{
		rem = num % 16;
		if (rem < 10)
			buffer[i++] = rem + '0';
		else
			buffer[i++] = (rem - 10) + 'a';
		num /= 16;
	}
	len += i;
	for (i = i - 1; i >= 0; i--)
		_putchar(buffer[i]);
	return (len);
}
