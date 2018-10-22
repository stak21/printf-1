#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct storage
{
	int size;
	char *box;
	char *start;
} mk_buffer;

typedef struct format
{
	char *format;
	mk_buffer (*f)(mk_buffer, va_list);
} format_t;

/* Essential functions */
int _printf(const char *format, ...);

/* Conversion specifier functions */
mk_buffer (*get_format(const char *format))(mk_buffer, va_list);
mk_buffer char_fmt(mk_buffer, va_list args);
mk_buffer str_fmt(mk_buffer, va_list args);
mk_buffer int_fmt(mk_buffer, va_list args);
mk_buffer rev_fmt(mk_buffer, va_list args);

/* Helper functions */
unsigned int _strlen(char *str);

#endif /* _HOLBERTON_H_ */
