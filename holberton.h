#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

char *char_fmt(char *buffer, va_list args, int size);
typedef struct format
{
	char *format;
	void (*f)(va_list);
} format_t;
char *(*get_format(const char *format))(char *, va_list);
#endif /* _HOLBERTON_H_ */
