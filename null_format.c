#include "holberton.h"

/**
 * check_null - Checks if a constant char pointer is NULL
 * @format: the character pointer to be checked
 *
 * Return: None.
 */
void check_null(const char *format)
{
	if (!format)
	{
		write(1, "Error\n", 6);
		exit(98);
	}
}
