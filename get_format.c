#include "holberton.h"

mk_buffer(*get_format(const char *format))(mk_buffer buffer, va_list)
{
	/* Variable declaration */
	int i;
	format_t formats[] = {
	{"c", char_fmt},
	{"s", str_fmt},
	{"r", rev_fmt},
	{"R", rot13_fmt},
	{"d", int_fmt},
	{"i", int_fmt},
	{"x", low_hex_fmt},
	{"X", upp_hex_fmt},
	{"S", cap_s_fmt},
	{" ", spc_fmt},
	{"\n", nl_fmt},
	{"\0", NULL},
	{NULL, NULL}
	};
	/* Variable initialization */
	i = 0;
	/* Match conversion specifier to correct function */
	while (formats[i].format && formats[i].format[0])
	{
		/* If match is found return pointer to correct function */
		if (*format == formats[i].format[0])
		{
			return (formats[i].f);
		}

		i++;
	}
	return (NULL);
}
