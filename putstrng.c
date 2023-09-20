#include "main.h"
/**
 * putstrng - prints the string and returns len
 * @list: accept the the list of type va_list
 * Return: returns the len of string
*/
int putstrng(va_list list)
{
	int i, len;
	char *char_p;

	char_p = va_arg(list, char *);
	if (char_p != NULL)
	{
		len = strlen(char_p);
		for (i = 0; i < len; i++)
		{
			_putchar(char_p[i]);
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
