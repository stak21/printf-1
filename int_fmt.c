#include "holberton.h"

mk_buffer int_fmt(mk_buffer buffer, va_list args)
{
	long int num;
	unsigned lnum;
	num = va_arg(args, int);
	if (num > 214748364799)
	{
		_printf("Error");
		exit(1);
	}
	if (num < 0)
	{
		num = -((unsigned int)num);
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
