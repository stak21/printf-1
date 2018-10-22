#include "holberton.h"

char *str_fmt(char *buffer, va_list args, unsigned int size)
{
	char *str;

	str = va_arg(args, char *);

	while (*str)
	{
		*buffer = *str;

		size += 1;
		buffer++;
		str++;
	}

	buffer--;
	return (buffer);
}
