#include "holberton.h"

int _printf(const char *format, ...)
{
	/* Variable declaration */
	va_list args;
	mk_buffer container;
	
	/* Check if format is NULL */
	if (!format)
	{
		write(1, "Error\n", 6);
		exit(98);
	}

	/* Variable initialization */
	container.size = 0;
	container.box = malloc(sizeof(char) * 1024);
	container.start = container.box;
	if (!container.box)
	{
		write(1, "Error\n", 6);
		exit(99);
	}
	container.start = container.box;

	va_start(args, format);

	/* Buffer allocation */
	while (*format)
	{
		/* Check for conversion specifier */
		if (*format == '%' && get_format(format + 1))
		{
			format++;
			container = get_format(format)(container, args);
		}
		else
		{
			*container.box = *format;
			container.size += 1;
		}
		container.box++;
		format++;
	}

	/* Print buffer to standard output */
	printf("\n");
	write(1, container.start, container.size);

	free(container.start);
	va_end(args);
	return (container.size);
}
