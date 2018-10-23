#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	i = j = 0;
	/*printf("1. %i, %d\n", 1, 1);
	_printf("1. %i, %d\n", 1, 1);

	printf("2. %i, %d\n", -1, -1);
	_printf("2. %i, %d\n", -1, -1);

	printf("3. %i, %d\n", 0, 0);
	_printf("3. %i, %d\n", 0, 0);

	printf("4. %i, %d\n");
	_printf("4. %i, %d\n");
	_printf("5. %i, %d\n", INT_MIN, INT_MAX);
	printf("5. %i, %d\n", INT_MIN, INT_MAX);

*/
i = printf("G1.1hello\n");
j = _printf("P1.1hello\n");
printf("\nG: %i, P: %i\n", i, j);
i = _printf("%w\n");
j = printf("%w\n");
printf("\nG: %i, P: %i\n", i, j);
i = _printf("P2. hello%   wo\n");
j = printf("G2. hello%   wo\n");
printf("\nG: %i, P: %i\n", i, j);
i = printf("G5. \" %20i.\n", 1043212331);
j = _printf("P5. \" %i\n", 5544);
printf("\nG: %i, P: %i\n", i, j);
i = printf("G6. hello  i\n"); 
j = _printf("P6. hello  i\n"); 
printf("\nG: %i, P: %i\n", i, j);
i = printf("G7. hello  \n"); 
j = _printf("P7. hello  \n"); 
printf("\nG: %i, P: %i\n", i, j);
printf("ignore G8/P8\n");
i = printf("G8. hello  %"); 
j = printf("P8. hello  %"); 
printf("\nG: %i, P: %i\n", i, j);
i = printf("G9. hello  % \n"); 
j = _printf("P9. hello  % \n"); 
printf("\nG9: %i, P9: %i\n", i, j);
i = printf("G9.1 hello %\n");
j = _printf("P9.1 hello %\n");
printf("\nG9.1: %i, P9.1: %i\n", i, j);
printf("\n");
i = printf("G10. hello  % w\n"); 
j = _printf("P10. hello  % w\n"); 
printf("\nG: %i, P: %i\n", i, j);
i = printf("G11. hello%   i\n", 100); 
j = _printf("P11. hello%   i\n", 100); 
printf("\nG: %i, P: %i\n", i, j);
i = printf("G11.1 hello%   w\n", 100); 
j = _printf("P11.1 hello%   w\n", 100); 
printf("\nG: %i, P: %i\n", i, j);
printf("\nG: %i, P: %i\n", i, j);
i = printf("G12. 1234567890qwertyuioplkjhgfdsazxcvbnm,.`[]';/.,~!@#$^&*()_+=|\\\n"); 
j = _printf("P12. 1234567890qwertyuioplkjhgfdsazxcvbnm,.`[]';/.,~!@#$^&*()_+=|\\\n"); 
printf("\nG: %i, P: %i\n", i, j);
i = printf("G13. %s%s\n", "hello", "hello");
j = _printf("P13. %s%s\n", "hello", "hello");
printf("\nG: %i, P: %i\n", i, j);
i = printf("G14. %%i\n"); 
j = _printf("P14. %%i\n");
printf("\nG: %i, P: %i\n", i, j);
i = printf("G15. %\0i\n");
j = _printf("P15. %\0i\n");
printf("\nG: %i, P: %i\n", i, j);
printf("\n");
i = printf("G16. %\n");
j = _printf("P16. %\n");
printf("\nG: %i, P: %i\n", i, j);
i = printf("G17.  %");
j = _printf("P17.  %");
printf("\nG: %i, P: %i\n", i, j);
    return (0);
}
