#include "main.h"
/**
 * putS - prints the string and returns len
 * @list: accept the the list of type va_list
 * Return: returns the len of string
*/
int putS(va_list list)
{
	int i, len, tmphld, str;
	char *char_p;

	char_p = va_arg(list, char *);
	tmphld = 0, len = 0;
	if (char_p != NULL)
	{
		str = strlen(char_p);
		for (i = 0; i < str; i++)
		{
			tmphld = (int)char_p[i];
			if (tmphld >= 32 && tmphld < 127)
			{
				_putchar(char_p[i]);
				len++;
			}
			else
			{
				_putchar('\\');
				_putchar('x');
				len += putstrHEX(char_p[i]);
				len += 2;
			}

		}
	}
	else
	{
		char_p = "(null)";
		len = strlen(char_p);
		for (i = 0; i < len; i++)
		{
			_putchar(char_p[i]);
		}
	}
	return (len);
}
