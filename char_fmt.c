#include "holberton.h"

/**
* char_fmt - adds the char value into the buffer
* 
*/

mk_buffer char_fmt(mk_buffer buffer, va_list args)
{
	char c = (char)va_arg(args, int);

	*buffer.box = c;
	buffer.size += 1;

	return (buffer);
}
