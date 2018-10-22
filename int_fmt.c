#include "holberton.h"

char *int_fmt(char *buffer, va_list args, unsigned int size)
{
	int num;
	unsigned int uns_num;

	num = va_arg(args, int);

	if (num < 0)
	{
		*buffer = '-';
		num -= num;
		buffer++;
		size += 1;
	}

	uns_num = num;

	while (num / 10)
	{
		*buffer = (uns_num / 10 + '0');
		num /= 10;
		buffer++;
		size += 1;

		if (uns_num / 10 == 0)
		{
			*buffer = (uns_num % 10 + '0');
			buffer++;
			size += 1;
		}
	}

	return (buffer);
}
