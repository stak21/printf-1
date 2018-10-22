#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct format
{
	char *format;
	void (*f)(va_list);
} format_t;

#endif /* _HOLBERTON_H_ */
