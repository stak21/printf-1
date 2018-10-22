#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
char *(*get_format(const char *format))(char *, va_list, unsigned int);
char *char_fmt(char *buffer, va_list args, unsigned int size);
char *str_fmt(char *buffer, va_list args, unsigned int size);
char *int_fmt(char *buffer, va_list args, unsigned int size);

char *char_fmt(char *buffer, va_list args, int size);
typedef struct format
{
	char *format;
	char *(*get_format(const char *format))(char *, va_list);
} format_t;
#endif /* _HOLBERTON_H_ */
