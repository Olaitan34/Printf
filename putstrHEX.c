#include "main.h"
/**
 * putstrHEX - prints the hexadecimal representation
 * of an integer
 * @f: pointer to character
 * Return: number of characters printed
 */
int putstrHEX(char f)
{
	unsigned int num;
	int len, i, rem;
	char buffer[20] = {'0'};

	len = 0;
	num = (int)f;
	i = 0;
	if (num == 0)
	{
		_putchar('0');
		_putchar('0');
		return (2);
	}
	while (num != 0)
	{
		rem = num % 16;
		if (rem < 10)
			buffer[i++] = rem + '0';
		else if (rem == 10)
		{
			buffer[i++] = (rem - 10) + 'A';
			buffer[i++] = '0';
		}
		else
			buffer[i++] = (rem - 10) + 'A';
		num /= 16;
	}
	len = i;
	for (i = i - 1; i >= 0; i--)
		_putchar(buffer[i]);
	return (len);
}
