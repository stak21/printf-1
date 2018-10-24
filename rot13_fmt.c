#include "holberton.h"

/**
 * rot13_fmt - Handles conversion specifier "R"
 * @buffer: Pointer to struct buffer
 * @args: the string to be converted to rot13 and printed
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer rot13_fmt(mk_buffer buffer, va_list args)
{
	int i;
	char *str;

	char shift13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm',
	'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
	'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	char letters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	'y', 'z',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
	'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	str = va_arg(args, char *);

	while (*str)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*str == letters[i])
			{
				*buffer.box = shift13[i];
				break;
			}
		}
		if (!letters[i])
			*buffer.box = *str;

		buffer.box++;
		buffer.size++;
		str++;
	}

	buffer.box--;
	return (buffer);
}
