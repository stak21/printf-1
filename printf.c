#include "holberton.h"

int _printf(const char *format, ...)
{
	/* Variable declaration */
	va_list args;
	unsigned int size;
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
		if (*format == '%')
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
	write(1, container.start, 100);

	free(container.start);
	va_end(args);
	printf("size at end:%i\n", container.size);
	return (container.size);
}
