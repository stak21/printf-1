#include "holberton.h"

int write_print(mk_buffer container, va_list args);

/**
 * _printf - Creates a buffer and writes that buffer to standard output
 * @format: the string to be printed, may contain conversion specifiers
 * which placehold for other data types to be printed
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	mk_buffer container;

	check_null(format);
	container = create_buffer(container);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && get_format(format + 1))
		{
			if (!(get_format(format + 1)))
			{
				container = add_buff(container, args, format, 0);
					format++;
				continue;
			}
			while (*(format + 1) == ' ')
				format++;
			if (*(format + 1) == '\0')
			{
				format++;
				continue;
			}
			else if (*(format + 1) == '\n' && *format == '%')
			{
				container = add_buff(container, args, 0, '%');
				format++;
				continue;
			}
			if (*(format + 1) && !(get_format(format + 1)))
			{
				container = add_buff(container, args, 0, '%');
				container = add_buff(container, args, format, 0);
				format++;
				continue;
			}
			else if (*format == ' ')
				container = add_buff(container, args, format, 0);
			format++;
			container = get_format(format)(container, args);
		}
		else if (*format == '%' && *(format + 1) == '\0')
		{
			write(1, container.start, container.size);
			free(container.start);
			va_end(args);

			return (-1);
		}
		else
		{
			if (*(format + 1) == '%' && *format == '%')
				format++;
			*container.box = *format;
			container.size += 1;
		}
		container.box++;
		format++;
	}
	return (write_print(container, args));
}

/**
 * write_print - Writes and frees the buffer to standard output
 * @container: the string to be printed, may contain conversion specifiers
 * which placehold for other data types to be printed
 * @args: the args
 * Return: The number of characters printed.
 */
int write_print(mk_buffer container, va_list args)
{
	write(1, container.start, container.size);
	free(container.start);
	va_end(args);

	return (container.size);
}
