#include "holberton.h"

/**
* cap_s_fmt - prints every string, except for non printable characters, those
* are represented by 0xXX
* @buffer: pointer to the struct buffer
* @var: holds the parameters that were passed in
* Return: buffer
*/

mk_buffer cap_s_fmt(mk_buffer buff, va_list var)
{
	int i, j, len;
	char *str, *null_string;
	char *hex;
	null_string = "(null)";
	str = va_arg(var, char *);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
		{
			*buff.box = str[i];
			buff.size += 1;
			buff.box++;
		}
		else
		{
			hex = cvrt_upper_hex(str[i]);
			buff = add_buff(buff, var, 0, '\\');
			buff = add_buff(buff, var, 0, 'x');
			for (j = 0; j < 2; j += 1)
			{
				buff = add_buff(buff, var, hex, 0);
				hex++;
			}
		}
			i += 1;
	}
	return (buff);
}
