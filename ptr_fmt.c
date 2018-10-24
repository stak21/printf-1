#include "holberton.h"

mk_buffer write_nil(mk_buffer buffer);

/**
 * ptr_fmt - Handles conversion specifier "p"
 * @buffer: Pointer to struct buffer
 * @args: the string to be printed
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer ptr_fmt(mk_buffer buffer, va_list args)
{
	int len, i, temp;
	unsigned long int num;
	void *ptr;
	char rev_hex[100];

	ptr = va_arg(args, void *);
	if (!ptr)
		return (write_nil(buffer));

	num = (unsigned long int)ptr;
	*buffer.box = '0';
	buffer.box++;
	buffer.size++;
	*buffer.box = 'x';
	buffer.box++;
	buffer.size++;
	len = 0;
	while (num)
	{
		temp = 0;

		temp = num % 16;

		if (temp < 10)
			rev_hex[len] = temp + 48;
		else
			rev_hex[len] = temp + 87;
		len++;
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

/**
 * write_nil - Writes nil to buffer
 * @buffer: Pointer to struct buffer
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer write_nil(mk_buffer buffer)
{
	char *nilstr = "(nil)";

	while (*nilstr)
	{
		*buffer.box++ = *nilstr++;
		buffer.size++;
	}

	buffer.box--;
	return (buffer);
}
