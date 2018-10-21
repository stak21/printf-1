#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

unsigned int _strlen(char *str);
void *_buffer(char *str);

typedef struct format
{
	char *format;
	void (*f)(va_list);
} format_t;

#endif /* _HOLBERTON_H_ */
