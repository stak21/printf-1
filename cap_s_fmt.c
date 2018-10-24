#include "holberton.h"

/**
* cap_s_fmt - prints every string, except for non printable characters, those
* are represented by 0xXX
* @buff: pointer to the struct buffer
* @var: holds the parameters that were passed in
* Return: buffer
*/

mk_buffer cap_s_fmt(mk_buffer buff, va_list var)
{
	int i, j;
	char *str;
	char *hex;

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
			hex = cvrt_upper_hex((int)str[i]);
			buff = add_buff(buff, var, 0, '\\');
			buff = add_buff(buff, var, 0, 'x');
			for (j = 1; j >= 0; j -= 1)
				buff = add_buff(buff, var, hex + j, 0);
			free(hex);
		}
			i += 1;
	}
	return (buff);
}
