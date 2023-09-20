#include "main.h"

/**
 * putbin - prints a binary number.
 * @val: arguments.
 * Return: cnt.
 */
int putbin(va_list val)
{
	int flg = 0;
	int cnt = 0;
	int i, a = 1, b;
	unsigned int new_val = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & new_val);
		if (p >> (31 - i))
			flg = 1;
		if (flg)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cnt++;
		}
	}
	if (cnt == 0)
	{
		cnt++;
		_putchar('0');
	}
	return (cnt);
}
