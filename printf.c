#include "holberton.h"

/**
 * _printf - Creates a buffer and writes that buffer to standard output
 * @format: the string to be printed, may contain conversion specifiers
 * which placehold for other data types to be printed
 *
 * Return: The number of characters printed.
 */
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
	container = create_buffer(container);
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
			if (*(format + 1) == '%' && *format == '%')
				format++;
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
