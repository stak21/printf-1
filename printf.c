#include "holberton.h"

int _printf(const char *format, ...)
{
	/* Variable declaration */
	va_list args;
	unsigned int i, size;
	char *buffer, *start;

	/* Check if format is NULL */
	if (!format)
	{
		write(1, "Error\n", 6);
		exit(98);
	}

	/* Variable initialization */
	size = 0;
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		write(1, "Error\n", 6);
		exit(99);
	}
	start = buffer;

	va_start(args, format);

	/* Buffer allocation */
	while (*format)
	{
		/* Check for conversion specifier */
		if (*format == '%')
		{
			format++;
			get_format(format)(buffer, args, 18);
		}
		else
		{
			*buffer = *format;
			size += 1;
		}

		buffer++;
		format++;
		i++;
	}

	/* Print buffer to standard output */
	write(1, start, size);

	free(buffer);
	va_end(args);

	return (size);
}
