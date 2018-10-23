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
