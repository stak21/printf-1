#include "holberton.h"

mk_buffer int_fmt(mk_buffer buffer, va_list args)
{
	long int num;

	num = va_arg(args, int);
	if (num > 2147483647)
	{
		_printf("Error");
		exit(1);
	}
	if (num < 0)
	{
		*buffer.box = '-';
		num = -num;
		buffer.box++;
		buffer.size += 1;
	}
	else if (num == 0)
	{
		*buffer.box = '0';
		buffer.box++;
		buffer.size += 1;
	}
	buffer = rec_digits(num, buffer);
		
	buffer.box--;
	return (buffer);
}
mk_buffer rec_digits(int num, mk_buffer buffer)
{
	if (num == 0)
		return (buffer);
	else
		buffer = rec_digits(num / 10, buffer);

	*buffer.box = num % 10 + '0';
	buffer.box++;
	buffer.size += 1;

	return(buffer);
}
