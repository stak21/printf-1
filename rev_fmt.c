#include "holberton.h"

/**
 * rev_fmt - Handles conversion specifier "r"
 * @buffer: Pointer to struct buffer
 * @args: the string to be printed in reverse
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer rev_fmt(mk_buffer buffer, va_list args)
{
	char *str;
	int len;

	str = va_arg(args, char *);
	len = _strlen(str);
	len--;
	while (len >= 0)
	{
		*buffer.box = str[len];
		buffer.box++;
		buffer.size++;
		len--;
	}

	buffer.box--;
	return (buffer);
}
