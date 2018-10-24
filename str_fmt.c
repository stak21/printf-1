#include "holberton.h"

/**
 * str_fmt - Handles conversion specifier "s"
 * @buffer: Pointer to struct buffer
 * @args: the string to be printed
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer str_fmt(mk_buffer buffer, va_list args)
{
	int i;
	char *str, *null_string;

	null_string = "(null)";
	str = va_arg(args, char *);

	if (!str)
	{
		for (i = 0; null_string[i]; i++)
		{
			*buffer.box = null_string[i];
			buffer.size += 1;
			buffer.box++;
		}

		buffer.box--;
		return (buffer);
	}

	while (*str)
	{
		*buffer.box = *str;
		buffer.size += 1;
		buffer.box++;
		str++;
	}

	buffer.box--;
	return (buffer);
}
