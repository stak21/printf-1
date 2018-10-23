#include "holberton.h"

void check_null(const char *)
{
	write(1, "Error\n", 6);
	exit(98);
}
