#include "holberton.h"

mk_buffer create_buffer(mk_buffer container)
{
 /* Variable initialization */
	container.size = 0;
	container.box = malloc(sizeof(char) * 1024);
	container.start = container.box;
	if (!container.box)
	{
		write(1, "Error\n", 6);
		exit(99);
	}
	return (container);
}

mk_buffer add_buff(mk_buffer buff, va_list var, const char *fmt, char custom)
{
	char using_char = (custom ? custom : *fmt);
	(void)var;
	*buff.box = using_char;
	buff.box++;
	buff.size++;
	return (buff);
}
mk_buffer nl_fmt(mk_buffer buff, va_list var)
{
	(void)var;
	*buff.box = '%';
	buff.box++;
	*buff.box = '\n';
	buff.box++;
	buff.size += 2;
	return (buff);
}

mk_buffer spc_fmt(mk_buffer buff, va_list var)
{
	(void)var;
	return (buff);
}

int is_printable(int i)
{
	if (i > 32 && i <= 127)
		return (1);
	return (0);
}
