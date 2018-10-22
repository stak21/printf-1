#include "holberton.h"

int _printf(const char *format, ...)
{
	/* Variable declaration */
	va_list args;
	unsigned int size;
	char *buffer, *start;

	mk_buffer container;
	
	/* Check if format is NULL */
	if (!format)
	{
		write(1, "Error\n", 6);
		exit(98);
	}

	/* Variable initialization */
	size = 0;
	container.size = 0;
	container.box = malloc(sizeof(char) * 1024);
	container.start = container.box;
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
			buffer = get_format(format)(buffer, args, size);
		}
		else
		{
			*buffer = *format;
			size += 1;
		}

		buffer++;
		format++;
	}

	/* Print buffer to standard output */
	write(1, start, 100);

	free(start);
	va_end(args);

	return (size);
}
