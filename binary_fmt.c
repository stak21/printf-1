#include "holberton.h"

/**
 * binary_fmt - Handles conversion specifier "b"
 * @buffer: Pointer to struct buffer
 * @args: the integer to be converted to lowercase hex
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer binary_fmt(mk_buffer buffer, va_list args)
{
	int j, len;
	unsigned int num;
	int binary_arr[1000];

	num = va_arg(args, unsigned int);

	len = 0;
	while (num > 0)
	{
		binary_arr[len] = num % 2;
		num = num / 2;
		len++;
	}

	j = len - 1;
	while (j >= 0)
	{
		*buffer.box = binary_arr[j];
		buffer.box++;
		buffer.size++;
		j--;
	}

	buffer.box--;
	return (buffer);
}
