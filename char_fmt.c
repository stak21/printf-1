#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* char_fmt - adds the char value into the buffer
* 
*/

char *char_fmt(char *buffer, va_list args, int size)
{
	char c = va_arg(args, char);

	printf("%c", c);
	
	return (buffer);
}
