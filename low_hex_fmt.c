#include "holberton.h"

/**
 * low_hex_fmt - Handles conversion specifier "x"
 * @buffer: Pointer to struct buffer
 * @args: the integer to be converted to lowercase hex
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer low_hex_fmt(mk_buffer buffer, va_list args)
{
	int num, temp, i, len;
	char rev_hex[100];

	num = va_arg(args, int);

	len = 0;
	while (num)
	{
		temp = 0;

		temp = num % 16;

		if (temp < 10)
		{
			rev_hex[len] = temp + 48;
			len++;
		}
		else
		{
			rev_hex[len] = temp + 87;
			len++;
		}

		num /= 16;
	}

	i = 0;
	len--;
	while (i <= len)
	{
		*buffer.box = rev_hex[len];

		buffer.box++;
		buffer.size++;
		len--;
	}

	buffer.box--;
	return (buffer);
}
