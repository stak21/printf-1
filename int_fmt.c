#include "holberton.h"

mk_buffer int_fmt(mk_buffer buffer, va_list args)
{
	int num;
	unsigned int uns_num;

	num = va_arg(args, int);

	if (num < 0)
	{
		*buffer.box = '-';
		num -= num;
		buffer.box++;
		buffer.size += 1;
	}

	uns_num = num;

	while (num / 10)
	{
		*buffer.box = (uns_num / 10 + '0');
		num /= 10;
		buffer.box++;
		buffer.size += 1;

		if (uns_num / 10 == 0)
		{
			*buffer.box = (uns_num % 10 + '0');
			buffer.box++;
			buffer.size += 1;
		}
	}

	return (buffer);
}
