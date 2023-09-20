#include "main.h"
/**
  * _printf - a printf function with limited func
  * @format: List of string
  * @...: var
  * Return: int (sum of items)
  */
int _printf(const char *format, ...)
{
	check_match chk[] = {
		{"%s", putstrng}, {"%%", putper}, {"%b", putbin}, {"%S", putS},
		{"%u", putni}, {"%o", putoct}, {"%c", print_char},
		{"%d", putint}, {"%i", putint}, {"%x", put_hex}, {"%X", put_HEX}
	};
	va_list args;
	int i, _index, sizeof_chkr, len;

	va_start(args, format);
	sizeof_chkr = sizeof(chk) / sizeof(chk[0]), len = 0;
	if (format == NULL)
		return (-1);
	for (i = 0; (format[i] != '\0'); i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%')
		{
			for (_index = 0; _index < sizeof_chkr; _index++)
			{
				if (format[i + 1] == *(chk[_index].id + 1))
				{
					len += chk[_index].func(args);
					i += 1;
					break;
				}
			}
			if (_index == sizeof_chkr)
			{
				_putchar(format[i]);
				len++;
			}
		} else
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
