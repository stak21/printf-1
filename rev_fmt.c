#include "holberton.h"

mk_buffer rev_fmt(mk_buffer buffer, va_list args)
{
	char *str;
	int len;

	str = va_arg(args, char *);
	len = _strlen(str);

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
