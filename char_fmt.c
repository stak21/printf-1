#include "holberton.h"

/**
* char_fmt - adds the char value into the buffer
* @buffer: holds the members for box, size and startls
* @args: list of passed in variables
* Return: returns the buffer struct
*/

mk_buffer char_fmt(mk_buffer buffer, va_list args)
{
	unsigned char c = va_arg(args, int);

	*buffer.box = c;
	buffer.size += 1;

	return (buffer);
}
