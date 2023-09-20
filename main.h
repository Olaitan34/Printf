#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);

/**
 * struct checker - maps the specifiers for printf
 * @id: char pointer of the specifier
 * @func: type pointer to function for the conversion
 */
typedef struct checker
{
    char *id;
    int (*func)();
} check_match;

int putstrng(va_list list);
int putper(void);
int print_char(va_list arg);
int putint(va_list list);
int putni(va_list list);
int putbin(va_list list);
int put_HEX(va_list args);
int put_hex(va_list args);
int putoct(va_list args);
int putstrHEX(char f);
int putS(va_list list);

#endif

