#include "holberton.h"

/**
* int_fmt - adds the int value into the buffer
* @buffer: holds the members for box, size and startls
* @args: list of passed in variables
* Return: returns the buffer struct
*/
mk_buffer int_fmt(mk_buffer buffer, va_list args)
{
	int num;
	int lnum;

	num = va_arg(args, int);

	if (num == -2147483648)
	{
		*buffer.box = '-';
		buffer.box++;
		buffer.size += 1;
		*buffer.box = '2';
		buffer.box++;
		buffer.size += 1;
		num = 147483648;
		buffer = rec_digits(num, buffer);
		buffer.box--;
		return (buffer);
	}

	if (num < 0)
	{
		num = -num;
		lnum = num;
		buffer = add_buff(buffer, args, 0, '-');
	}
	else if (num == 0)
	{
		buffer = add_buff(buffer, args, 0, '0');
	}
	lnum = num;
	buffer = rec_digits(lnum, buffer);

	buffer.box--;
	return (buffer);
}

/**
* rec_digits - actually adds the int value into the buffer
* @buffer: holds the members for box, size and startls
* @lnum: the number to be added
* Return: returns the buffer struct
*/
mk_buffer rec_digits(int lnum, mk_buffer buffer)
{
	if (lnum == 0)
		return (buffer);
	buffer = rec_digits(lnum / 10, buffer);
	*buffer.box = lnum % 10 + '0';
	buffer.box++;
	buffer.size += 1;

	return (buffer);
}
