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
		num -= num;
		buffer.box++;
		buffer.size += 1;
	}
	else if (num == 0)
	{
		*buffer.box = '0';
		buffer.box++;
		buffer.size += 1;
	}

	while (num / 10)
	{
		*buffer.box = (num / 10 + '0');
		num %= 10;
		buffer.box++;
		buffer.size += 1;

		if (num / 10 == 0)
		{
			*buffer.box = (num % 10 + '0');
			buffer.box++;
			buffer.size += 1;
		}
	}
	buffer.box--;
	return (buffer);
}
