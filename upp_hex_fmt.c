#include "holberton.h"

/**
 * upp_hex_fmt - Handles conversion specifier "X"
 * @buffer: Pointer to struct buffer
 * @args: the integer to be converted to uppercase hex
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer upp_hex_fmt(mk_buffer buffer, va_list args)
{
	char *rev_hex;
	int i, len;

	i = 0;
	rev_hex = cvrt_upper_hex(va_arg(args, int));
	len = _strlen(rev_hex);
	while (i <= len)
	{
		*buffer.box = rev_hex[len];

		buffer.box++;
		buffer.size++;
		len--;
	}

	buffer.box--;
	free(rev_hex);
	return (buffer);
}

/**
* cvrt_upper_hex - converts an integer to a hex
* @i: holds the number to convert
* Return: a pointer to the converted hex
*/
char *cvrt_upper_hex(int i)
{
	int temp, len, n, flag, digit;
	char *ret_hex;

	flag = 0;
	n = 1;
	digit = i;
	len = 0;
	while (digit / 10)
	{
		digit /= 10;
		n += 1;
	}
	ret_hex = malloc(sizeof(char) * n + 1);
	if (i < 16)
	{
		flag = 1;
	}
	while (i)
	{
		temp = 0;
		temp = i % 16;
		if (temp < 10)
			temp += 48;
		else
			temp += 55;
		ret_hex[len] = temp;
		len += 1;
		i /= 16;
	}
	if (flag)
	{
		ret_hex[len] = '0';
		len += 1;
	}
	ret_hex[len] = '\0';
	return (ret_hex);
}
