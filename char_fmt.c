#include "holberton.h"

/**
* char_fmt - adds the char value into the buffer
* 
*/

char *char_fmt(char *buffer, va_list args, unsigned int size)
{
	char c = (char)va_arg(args, int);

	*buffer = c;
	size += 1;

	return (buffer);
}
