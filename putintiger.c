#include "main.h"
/**
 * putint - prints the integer and returns length
 * @list: accept the list of type va_list
 * Return: the length of the integer
 */
int putint(va_list list)
{
	int num, tmp, len, i, outlen;
	char *p;

	num = va_arg(list, int);
	tmp = abs(num), len = 0, i = 0, outlen = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (tmp != 0)
		{
			tmp /= 10;
			len++;
		}
		if (num < 0)
		{
			p = malloc(sizeof(char) * (len + 2));
			if (p == NULL)
				return (0);
			sprintf(p, "%d", num);
		}
		else
		{
			p = malloc(sizeof(char) * (len + 1));
			if (p == NULL)
				return (0);
			sprintf(p, "%d", num);
		}
		for (i = 0; i < (int) strlen(p); i++)
		{
			_putchar(p[i]);
			outlen++;
		}
	}
	free(p);
	return (outlen);
}
