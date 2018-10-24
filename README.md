# 0x10: C - printf
For this project we wrote own `printf` function. It is the first group project for [Holberton School](https://www.holbertonschool.com/ "Holberton School"). Our version of `printf` currently handles the following conversion specifiers:

| Symbol | Operation |
|--|--|
| `c` | Prints character |
| `s` | Prints string |
| `%` | Prints modulus operator |
| `d` | Prints integer |
| `i` | Also prints integer |
| `h` | Converts from decimal and prints lowercase hexadecimal |
| `H` | Converts from decimal and prints lowercase hexadecimal |
| `r` | Reverses and prints string |
| `R` | Encodes and prints string using `rot13` |

## Getting Started
Quick start guide to using our version of `printf`.

### 1. Install
Run the following command:
```
$ git clone https://github.com/wescottsharples/printf.git
```

### 2. BYOM
*Bring your own main file.* To use our `printf` you will need a `main.c` file to compile it with. Go ahead and try the following:
```
int main(void)
{
	_printf("%c\n", 'H');
	_printf("%s\n", "Hello");
	_printf("%d\n", 42);
	_printf("%i\n", -42);
	_printf("%r\n", "Hello");
	_printf("%R\n", "Hello");
	return (0);
}
```

### 3. Compile
Use the following command to compile
```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```

### 4. Pat yourself on the back
Going along with our sample code above, you would hopefully see this output:
```
$ ./a.out
H
Hello
42
-42
olleH
Uryyb
$
```

## Environment Information
| Aspect | Version |
|--|--|
| **Language** | C |
| **Operating System** | Ubuntu 14.04 LTS |
| **Compiler** | `gcc 4.8.4` |
| **Style Guidelines** | [`Betty`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") |

## Project Requirements
-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called  `holberton.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Authorized functions and macros:
    -   `write`  (`man 2 write`)
    -   `malloc`  (`man 3 malloc`)
    -   `free`  (`man 3 free`)
    -   `va_start`  (`man 3 va_start`)
    -   `va_end`  (`man 3 va_end`)
    -   `va_copy`  (`man 3 va_copy`)
    -   `va_arg`  (`man 3 va_arg`)
-   Note that we will not provide the  `_putchar`  function for this project

## Project Tasks
#### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.
-   Prototype:  `int _printf(const char *format, ...);`
-   Returns: the number of characters printed (excluding the null byte used to end output to strings)
-   write output to stdout, the standard output stream
-   `format`  is a character string. The format string is composed of zero or more directives. See  `man 3 printf`  for more detail. You need to handle the following conversion specifiers:
    -   `c`
    -   `s`
    -   `%`
-   You don’t have to reproduce the buffer handling of the C library  `printf`  function
-   You don’t have to handle the flag characters
-   You don’t have to handle field width
-   You don’t have to handle precision
-   You don’t have to handle the length modifiers
## 
#### 1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:
-   `d`
-   `i`
-   You don’t have to handle the flag characters
-   You don’t have to handle field width
-   You don’t have to handle precision
-   You don’t have to handle the length modifiers
## 
#### 2. Just because it's in print doesn't mean it's the gospel
Create a man page for your function.
## 
#### 3. With a face like mine, I do better in print
Handle the following custom conversion specifiers:
-   `b`: the unsigned int argument is converted to binary
## 
#### 4. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:
-   `u`
-   `o`
-   `x`
-   `X`
-   You don’t have to handle the flag characters
-   You don’t have to handle field width
-   You don’t have to handle precision
-   You don’t have to handle the length modifiers
## 
#### 5. Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call `write` as little as possible.
## 
#### 6. My weakness is wearing too much leopard print
Handle the following custom conversion specifier:
-   `S`  : prints the string.
-   Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way:  `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
## 
#### 7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier:  `p`.
-   You don’t have to handle the flag characters
-   You don’t have to handle field width
-   You don’t have to handle precision
-   You don’t have to handle the length modifiers
## 
#### 8. The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:
-   `+`
-   space
-   `#`
## 
#### 9. Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:
-   `l`
-   `h`
Conversion specifiers to handle:  `d`,  `i`,  `u`,  `o`,  `x`,  `X`
## 
#### 10. Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.
## 
#### 11. The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.
## 
#### 12. It's depressing when you're still around and your albums are out of print
Handle the `0` flag character for non-custom conversion specifiers.
## 
#### 13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the `-` flag character for non-custom conversion specifiers.
## 
#### 14. Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:
-   `r`  : prints the reversed string
## 
#### 15. The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:
-   `R`: prints the rot13'ed string

## 
#### 16. *
All the above options work well together.

## Future Iterations
- Clean the code up and put discrete functions in one file. 
- Support field width specifiers
- Support for binary and octal conversion
- Support for unsigned integers
