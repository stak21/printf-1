G: 28, P: 11
G6. hello  i
P6. hello  i

G: 13, P: 13
G7. hello
P7. hello

G: 12, P: 12
ignore G8/P8
G8. hello  P8. hello
G: -1, P: -1
G9. hello  %
P9. hello   %

▽
#include <limits.h>

G9: 14, P9: 14
G9.1 hello %
P9.1 hello %

G9.1: 13, P9.1: 13

G10. hello  % w

G: 16, P: 13
G11. hello 100
P11. hello 100

G: 15, P: 15
G11.1 hello% w
P11.1 hello% w

G: 15, P: 15

G: 15, P: 15

G: 15, P: 15
G13. hellohello
P13. hellohello

G: 16, P: 16
G14. %i
P14. %i

G: 8, P: 8
G15.
G: -1, P: -1

G16. %
P16. %

G: 7, P: 7
G17.
G: -1, P: -1
G17.p
P17.p

G: 6, P: 6
G18.(null)   %
P18.(null)   %

G: 16, P: 16
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc-4.8 -Wall -Werror -Wno-format -Wextra -pedantic char_fmt.c get_format.c int_fmt.c str_fmt.c rev_fmt.c _strlen.c rot13_fmt.c upp_hex_fmt.c low_hex_fmt.c printf.c null_format.c helper_func.c default_fmt.c space_fmt.c testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ ./a.out
1. 1, 1
1. 1, 1
2. -1, -1
2. -1, -1
3. 0, 0
3. 0, 0
4. -203147336, 0
4. 2147483631, -203138592
5. -2147483648, 2147483647
5. -2147483648, 2147483647
G1.1hello
P1.1hello

G: 10, P: 10

G: % Y

G: -1, P: -1

%

G: -1, P: 1
P2. hello% wo
G2. hello% wo

G: 14, P: 14
G5. "           1043212331.
P5. " 5544

G: 28, P: 11
G6. hello  i
P6. hello  i

G: 13, P: 13
G7. hello
P7. hello

G: 12, P: 12
ignore G8/P8
G8. hello  P8. hello
G: -1, P: -1
G9. hello  %
P9. hello   %

▽
#include <limits.h>

G9: 14, P9: 14
G9.1 hello %
P9.1 hello %

G9.1: 13, P9.1: 13

G10. hello  % w

G: 16, P: 13
G11. hello 100
P11. hello 100

G: 15, P: 15
G11.1 hello% w
P11.1 hello% w

G: 15, P: 15

G: 15, P: 15

G: 15, P: 15
G13. hellohello
P13. hellohello

G: 16, P: 16
G14. %i
P14. %i

G: 8, P: 8
G15.
G: -1, P: -1

G16. %
P16. %

G: 7, P: 7
G17.
G: -1, P: -1
G17.p
P17.p

G: 6, P: 6
G18.(null)   %
P18.(null)   %

G: 16, P: 16
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc-4.8 -Wall -Werror -Wno-format -Wextra -pedantic char_fmt.c get_format.c int_fmt.c str_fmt.c rev_fmt.c _strlen.c rot13_fmt.c upp_hex_fmt.c low_hex_fmt.c printf.c null_format.c helper_func.c default_fmt.c space_fmt.c testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ ./a.out
1. 1, 1
1. 1, 1
2. -1, -1
2. -1, -1
3. 0, 0
3. 0, 0
4. 1700853688, 0
4. 2147483631, 1700862432
5. -2147483648, 2147483647
5. -2147483648, 2147483647
G1.1hello
P1.1hello

G: 10, P: 10

G: Y

G: -1, P: -1

%

G: -1, P: 1
P2. hello% wo
G2. hello% wo

G: 14, P: 14
G5. "           1043212331.
P5. " 5544

G: 28, P: 11
G6. hello  i
P6. hello  i

G: 13, P: 13
G7. hello
P7. hello

G: 12, P: 12
ignore G8/P8
G8. hello  P8. hello
G: -1, P: -1
G9. hello  %
P9. hello   %


▽
G9: 14, P9: 14
G9.1 hello %
P9.1 hello %

G9.1: 13, P9.1: 13

G10. hello  % w

G: 16, P: 13
G11. hello 100
P11. hello 100

G: 15, P: 15
G11.1 hello% w
P11.1 hello% w

G: 15, P: 15

G: 15, P: 15

G: 15, P: 15
G13. hellohello
P13. hellohello

G: 16, P: 16
G14. %i
P14. %i

G: 8, P: 8
G15.
G: -1, P: -1

G16. %
P16. %

G: 7, P: 7
G17.
G: -1, P: -1
G17.p
P17.p

G: 6, P: 6
G18.(null)   %
P18.(null)   %

G: 16, P: 16
vagrant@vagrant-ubuntu-trusty-64:~/printf$
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi get_format.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc-4.8 -Wall -Werror -Wno-format -Wextra -pedantic char_fmt.c get_format.c int_fmt.c str_fmt.c rev_fmt.c _strlen.c rot13_fmt.c upp_hex_fmt.c low_hex_fmt.c printf.c null_format.c helper_func.c default_fmt.c space_fmt.c testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ ./a.out
1. 1, 1
1. 1, 1
2. -1, -1
2. -1, -1
3. 0, 0
3. 0, 0
4. 1059829688, 0
4. 2147483631, 1059838432
5. -2147483648, 2147483647
5. -2147483648, 2147483647
G1.1hello
P1.1hello

G: 10, P: 10

G: Y

G: -1, P: -1

%

G: -1, P: 1
P2. hello% wo
G2. hello% wo

G: 14, P: 14
G5. "           1043212331.
P5. " 5544

G: 28, P: 11
G6. hello  i
P6. hello  i

G: 13, P: 13
G7. hello
P7. hello

G: 12, P: 12
ignore G8/P8
G8. hello  P8. hello
G: -1, P: -1
G9. hello  %
TESTING



P9. hello   %

G9: 14, P9: 14
G9.1 hello %
P9.1 hello %

G9.1: 13, P9.1: 13

G10. hello  % w

G: 16, P: 13
G11. hello 100

▽
P11. hello 100

▽


G: 15, P: 15
#include "holberton.h"

/**
 * low_hex_fmt - Handles conversion specifier "x"
 * @buffer: Pointer to struct buffer
 * @args: the integer to be converted to lowercase hex
 *
 * Return: Pointer to struct buffer.
 */
mk_buffer low_hex_fmt(mk_buffer buffer, va_list args)
{
        int num, i;
        int octo[100];

        num = va_arg(args, int);

        int i = 0;
        while (num)
        {
                octo[i] = n % 8;
        }


        buffer.box--;
        return (buffer);
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
-- INSERT --                                                                       20,19-33      All

▽

~
~
~
~
~
~
~
~
Wescotts-MacBook-Pro:~ wrs$ clear

~
~
~
~
~
~
-- INSERT --                                                                                     25,1          All
Wescotts-MacBook-Pro:~ wrs$ vagrant up
Bringing machine 'default' up with 'virtualbox' provider...
==> default: Resuming suspended VM...
==> default: Booting VM...
==> default: Waiting for machine to boot. This may take a few minutes...
    default: SSH address: 127.0.0.1:2222
    default: SSH username: vagrant
    default: SSH auth method: private key
    default: Warning: Authentication failure. Retrying...
^X^C==> default: Waiting for cleanup before exiting...
vVagrant exited after cleanup due to external interrupt.
Wescotts-MacBook-Pro:~ wrs$ vagrant ssh
vagrant@127.0.0.1's password:
Welcome to Ubuntu 14.04.5 LTS (GNU/Linux 3.13.0-157-generic x86_64)

 * Documentation:  https://help.ubuntu.com/

  System information as of Mon Oct 22 22:07:03 UTC 2018

  System load:  0.0               Processes:           82
  Usage of /:   5.3% of 39.34GB   Users logged in:     1
  Memory usage: 30%               IP address for eth0: 10.0.2.15
  Swap usage:   0%

  Graph this data and manage this system at:
    https://landscape.canonical.com/

  Get cloud support with Ubuntu Advantage Cloud Guest:
    http://www.ubuntu.com/business/services/cloud


Last login: Mon Oct 22 22:07:03 2018 from 10.0.2.2
vagrant@vagrant-ubuntu-trusty-64:~$ clear

▽
G11.1 hello% w
P11.1 hello% w

G: 15, P: 15

G: 15, P: 15

G: 15, P: 15
G13. hellohello
P13. hellohello

G: 16, P: 16
G14. %i
P14. %i

G: 8, P: 8
G15.
G: -1, P: -1

G16. %
P16. %

G: 7, P: 7
G17.
G: -1, P: -1
G17.p
P17.p

G: 6, P: 6
G18.(null)   %
P18.(null)   %

G: 16, P: 16
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc-4.8 -Wall -Werror -Wno-format -Wextra -pedantic char_fmt.c get_format.c int_fmt.c str_fmt.c rev_fmt.c _strlen.c rot13_fmt.c upp_hex_fmt.c low_hex_fmt.c printf.c null_format.c helper_func.c default_fmt.c space_fmt.c testfile.c
helper_func.c: In function ‘create_buffer’:
helper_func.c:10:3: error: incompatible types when returning type ‘int’ but ‘mk_buffer’ was expected
   return (-1);
   ^
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc-4.8 -Wall -Werror -Wno-format -Wextra -pedantic char_fmt.c get_format.c int_fmt.c str_fmt.c rev_fmt.c _strlen.c rot13_fmt.c upp_hex_fmt.c low_hex_fmt.c printf.c null_format.c helper_func.c default_fmt.c space_fmt.c testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ /A
-bash: /A: No such file or directory
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi int_fmt.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi binary_fmt.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ cp low_hex_fmt.c binary_fmt.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi binary_fmt.c
vagrant@vagrant-ubuntu-trusty-64:~$ cd printf/
vagrant@vagrant-ubuntu-trusty-64:~/printf$ clear

▽






















▽
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi low_hex_fmt.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi upp_hex_fmt.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ git branch
* master
  test
  wescott
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic *.c
binary_fmt.c: In function ‘binary_fmt’:
binary_fmt.c:28:2: error: statement with no effect [-Werror=unused-value]
  for (j >= 0; j--)
  ^
binary_fmt.c:28:18: error: expected ‘;’ before ‘)’ token
  for (j >= 0; j--)
                  ^
binary_fmt.c: At top level:
binary_fmt.c:37:8: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘.’ token
  buffer.box--;
        ^
binary_fmt.c:38:2: error: expected identifier or ‘(’ before ‘return’
  return (buffer);
  ^
binary_fmt.c:39:1: error: expected identifier or ‘(’ before ‘}’ token
 }
 ^
cc1: all warnings being treated as errors
itoa.c:5:7: error: conflicting types for ‘itoa’
 char *itoa(mk_buffer buffer, va_list args, int base)
       ^
In file included from itoa.c:1:0:
holberton.h:57:7: note: previous declaration of ‘itoa’ was here
 char *itoa(int num, int base);
       ^
itoa.c: In function ‘itoa’:
itoa.c:18:10: error: incompatible types when returning type ‘mk_buffer {aka struct storage}’ but ‘char *’ was expected
   return (buffer);
          ^
itoa.c:31:36: error: passing argument 3 of ‘add_buff’ makes pointer from integer without a cast [-Werror=int-conversion]
    buffer = add_buff(buffer, args, (rem - 10) + 'a');
                                    ^
In file included from itoa.c:1:0:
holberton.h:55:11: note: expected ‘const char *’ but argument is of type ‘int’
 mk_buffer add_buff(mk_buffer buff, va_list var, const char *fmt, char custom);
           ^
itoa.c:31:13: error: too few arguments to function ‘add_buff’
    buffer = add_buff(buffer, args, (rem - 10) + 'a');
             ^
In file included from itoa.c:1:0:
holberton.h:55:11: note: declared here
 mk_buffer add_buff(mk_buffer buff, va_list var, const char *fmt, char custom);
           ^
itoa.c:33:36: error: passing argument 3 of ‘add_buff’ makes pointer from integer without a cast [-Werror=int-conversion]
    buffer = add_buff(buffer, args, rem + '0');
                                    ^
In file included from itoa.c:1:0:
holberton.h:55:11: note: expected ‘const char *’ but argument is of type ‘int’
 mk_buffer add_buff(mk_buffer buff, va_list var, const char *fmt, char custom);
           ^
itoa.c:33:13: error: too few arguments to function ‘add_buff’
    buffer = add_buff(buffer, args, rem + '0');
             ^
In file included from itoa.c:1:0:
holberton.h:55:11: note: declared here
 mk_buffer add_buff(mk_buffer buff, va_list var, const char *fmt, char custom);
           ^
itoa.c:41:9: error: incompatible types when returning type ‘mk_buffer {aka struct storage}’ but ‘char *’ was expected
  return (buffer);
         ^
itoa.c:8:8: error: unused variable ‘str’ [-Werror=unused-variable]
  char *str;
        ^
itoa.c:7:6: error: variable ‘i’ set but not used [-Werror=unused-but-set-variable]
  int i, is_neg, num;
      ^
itoa.c:42:1: error: control reaches end of non-void function [-Werror=return-type]
 }
 ^
cc1: all warnings being treated as errors
main.c: In function ‘main’:
main.c:46:9: error: format ‘%c’ expects argument of type ‘int’, but argument 2 has type ‘void *’ [-Werror=format=]
  printf("null%cmorenull\n", NULL);
         ^
main.c:49:9: error: repeated ' ' flag in format [-Werror=format=]
  printf("%         w");
         ^
main.c:49:9: error: repeated ' ' flag in format [-Werror=format=]
main.c:49:9: error: repeated ' ' flag in format [-Werror=format=]
main.c:49:9: error: repeated ' ' flag in format [-Werror=format=]
main.c:49:9: error: repeated ' ' flag in format [-Werror=format=]
main.c:49:9: error: repeated ' ' flag in format [-Werror=format=]
main.c:49:9: error: repeated ' ' flag in format [-Werror=format=]
main.c:49:9: error: repeated ' ' flag in format [-Werror=format=]
main.c:49:9: error: unknown conversion type character ‘w’ in format [-Werror=format=]
main.c:51:9: error: unknown conversion type character 0xa in format [-Werror=format=]
  printf("%\n");
         ^
main.c:56:9: error: repeated ' ' flag in format [-Werror=format=]
  printf("Default: %    s\n", "Hello");
         ^
main.c:56:9: error: repeated ' ' flag in format [-Werror=format=]
main.c:56:9: error: repeated ' ' flag in format [-Werror=format=]
main.c:56:9: error: ' ' flag used with ‘%s’ gnu_printf format [-Werror=format=]
main.c:58:9: error: spurious trailing ‘%’ in format [-Werror=format=]
  printf("nothing%");
         ^
cc1: all warnings being treated as errors
ptr_fmt.c: In function ‘ptr_fmt’:
ptr_fmt.c:15:9: error: format ‘%i’ expects argument of type ‘int’, but argument 2 has type ‘long int’ [-Werror=format=]
  printf("%i\n", ptr);
         ^
ptr_fmt.c:16:37: error: expected ‘)’ before ‘;’ token
  printf("%p\n", va_arg(args, void *);
                                     ^
ptr_fmt.c:20:1: error: expected ‘;’ before ‘}’ token
 }
 ^
ptr_fmt.c:10:29: error: unused parameter ‘buffer’ [-Werror=unused-parameter]
 mk_buffer ptr_fmt(mk_buffer buffer, va_list args)
                             ^
ptr_fmt.c:20:1: error: control reaches end of non-void function [-Werror=return-type]
 }
 ^
cc1: all warnings being treated as errors
test.c: In function ‘main’:
test.c:25:9: error: unknown conversion type character ‘w’ in format [-Werror=format=]
  printf("String:[%w]\n", 2545);
         ^
test.c:25:9: error: too many arguments for format [-Werror=format-extra-args]
cc1: all warnings being treated as errors
testfile.c: In function ‘main’:
testfile.c:23:9: error: format ‘%i’ expects a matching ‘int’ argument [-Werror=format=]
  printf("4. %i, %d\n");
         ^
testfile.c:23:9: error: format ‘%d’ expects a matching ‘int’ argument [-Werror=format=]
testfile.c:32:12: error: spurious trailing ‘%’ in format [-Werror=format=]
 j = printf("G: Y %");
            ^
testfile.c:37:12: error: conversion lacks type at end of format [-Werror=format=]
 j = printf("% %");
            ^
testfile.c:37:12: error: spurious trailing ‘%’ in format [-Werror=format=]
testfile.c:41:12: error: repeated ' ' flag in format [-Werror=format=]
 j = printf("G2. hello%   wo\n");
            ^
testfile.c:41:12: error: repeated ' ' flag in format [-Werror=format=]
testfile.c:41:12: error: unknown conversion type character ‘w’ in format [-Werror=format=]
testfile.c:53:12: error: spurious trailing ‘%’ in format [-Werror=format=]
 i = printf("G8. hello  %");
            ^
testfile.c:54:12: error: spurious trailing ‘%’ in format [-Werror=format=]
 j = printf("P8. hello  %");
            ^
testfile.c:56:12: error: unknown conversion type character 0xa in format [-Werror=format=]
 i = printf("G9. hello  % \n");
            ^
testfile.c:59:12: error: unknown conversion type character 0xa in format [-Werror=format=]
 i = printf("G9.1 hello %\n");
            ^
testfile.c:63:12: error: unknown conversion type character ‘w’ in format [-Werror=format=]
 i = printf("G10. hello  % w\n");
            ^
testfile.c:65:12: error: repeated ' ' flag in format [-Werror=format=]
 i = printf("G11. hello%   i\n", 100);
            ^
testfile.c:65:12: error: repeated ' ' flag in format [-Werror=format=]
testfile.c:68:12: error: repeated ' ' flag in format [-Werror=format=]
 i = printf("G11.1 hello%   w\n", 100);
            ^
testfile.c:68:12: error: repeated ' ' flag in format [-Werror=format=]
testfile.c:68:12: error: unknown conversion type character ‘w’ in format [-Werror=format=]
testfile.c:68:12: error: too many arguments for format [-Werror=format-extra-args]
testfile.c:79:12: error: spurious trailing ‘%’ in format [-Werror=format=]
 i = printf("G15. %\0i\n");
            ^
testfile.c:79:12: error: embedded ‘\0’ in format [-Werror=format-contains-nul]
testfile.c:83:12: error: unknown conversion type character 0xa in format [-Werror=format=]
 i = printf("G16. %\n");
            ^
testfile.c:86:12: error: spurious trailing ‘%’ in format [-Werror=format=]
 i = printf("G17.  %");
            ^
testfile.c:92:1: error: reading through null pointer (argument 2) [-Werror=format=]
 i = printf("G18.%s %c  %\n", NULL, '\0');
 ^
testfile.c:92:12: error: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘void *’ [-Werror=format=]
 i = printf("G18.%s %c  %\n", NULL, '\0');
            ^
testfile.c:92:12: error: unknown conversion type character 0xa in format [-Werror=format=]
cc1: all warnings being treated as errors
testptr.c: In function ‘main’:
testptr.c:8:9: error: format ‘%p’ expects argument of type ‘void *’, but argument 2 has type ‘int *’ [-Werror=format=]
  printf("%p\n", &i);
         ^
cc1: all warnings being treated as errors
vagrant@vagrant-ubuntu-trusty-64:~/printf$ ls
a.out	       driveitoa.c    itoa.c	       oct_fmt.c  rot13_fmt.c  test.c	      wescottprintf
bettytest.c    get_format.c   low_hex_fmt.c    printf.c   skinnyf.c    testf.c
binary_fmt.c   helper_func.c  main.c	       ptr_fmt.c  space_fmt.c  testfile.c
char_fmt.c     holberton.h    non_print_fmt.c  README.md  str_fmt.c    testptr.c
default_fmt.c  int_fmt.c      null_format.c    rev_fmt.c  _strlen.c    upp_hex_fmt.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic -Wno-format binary_fmt
▽
.c char_fmt.c int_fmt.c helper_func.c low_hex_fmt.c null_format.c rev_fmt.c _strlen.c str_fmt.c printf.c rot13_fmt.c testfile.c
binary_fmt.c: In function ‘binary_fmt’:
binary_fmt.c:28:2: error: statement with no effect [-Werror=unused-value]
  for (j >= 0; j--)
  ^
binary_fmt.c:28:18: error: expected ‘;’ before ‘)’ token
  for (j >= 0; j--)
                  ^
binary_fmt.c: At top level:
binary_fmt.c:37:8: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘.’ token
  buffer.box--;
        ^
binary_fmt.c:38:2: error: expected identifier or ‘(’ before ‘return’
  return (buffer);
  ^
binary_fmt.c:39:1: error: expected identifier or ‘(’ before ‘}’ token
 }
 ^
cc1: all warnings being treated as errors
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic -Wno-format binary_fmt.c char_fmt.c int_fmt.c helper_func.c low_hex_fmt.c null_format.c rev_fmt.c _strlen.c str_fmt.c printf.c rot13_fmt.c testfile.c
binary_fmt.c: In function ‘binary_fmt’:
binary_fmt.c:28:15: error: expected ‘)’ before ‘;’ token
  while (j >= 0; j--)
               ^
binary_fmt.c:37:9: error: ‘return’ with a value, in function returning void [-Werror]
  return (buffer);
         ^
cc1: all warnings being treated as errors
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic -Wno-format binary_fmt.c char_fmt.c int_fmt.c helper_func.c low_hex_fmt.c null_format.c rev_fmt.c _strlen.c str_fmt.c printf.c rot13_fmt.c testfile.c
/tmp/ccjC5aLl.o: In function `_printf':
printf.c:(.text+0xe4): undefined reference to `get_format'
printf.c:(.text+0x100): undefined reference to `get_format'
printf.c:(.text+0x26b): undefined reference to `get_format'
printf.c:(.text+0x3d6): undefined reference to `get_format'
collect2: error: ld returned 1 exit status
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic -Wno-format binary_fmt.c char_fmt.c int_fmt.c helper_func.c low_hex_fmt.c null_format.c rev_fmt.c _strlen.c str_fmt.c printf.c rot13_fmt.c get_format.c testfile.c
/tmp/cc5cdDc3.o:(.rodata+0x98): undefined reference to `upp_hex_fmt'
collect2: error: ld returned 1 exit status
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic -Wno-format binary_fmt.c char_fmt.c int_fmt.c helper_func.c low_hex_fmt.c null_format.c rev_fmt.c _strlen.c str_fmt.c printf.c rot13_fmt.c upp_hex_fmt.c get_format.c testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi get_format.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic -Wno-format binary_fmt.c char_fmt.c int_fmt.c helper_func.c low_hex_fmt.c null_format.c rev_fmt.c _strlen.c str_fmt.c printf.c rot13_fmt.c upp_hex_fmt.c get_format.c testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ ./a.out
1. 1, 1
1. 1, 1
2. -1, -1
2. -1, -1
3. 0, 0
3. 0, 0
4. -62101576, 0
4. 2147483632, -62092832
5. -2147483648, 2147483647
5. -2147483648, 2147483647
G1.1hello
P1.1hello

G: 10, P: 10
P: Y
G: Y

G: -1, P: -1
%
%

G: -1, P: 1
P2. hello% wo
G2. hello% wo

G: 14, P: 14
G5. "           1043212331.
P5. " 5544

G: 28, P: 11
G6. hello  i
P6. hello  i

G: 13, P: 13
G7. hello
P7. hello

G: 12, P: 12
ignore G8/P8
G8. hello  P8. hello
G: -1, P: -1
G9. hello  %

▽
P9. hello   %

▽
 * main - Entry point

G9: 14, P9: 14
G9.1 hello %
P9.1 hello %

G9.1: 13, P9.1: 13

G10. hello  % w

G: 16, P: 13
G11. hello 100
P11. hello 100


▽
#include "holberton.h"
G: 15, P: 15
G11.1 hello% w
P11.1 hello% w

G: 15, P: 15

G: 15, P: 15


▽





















G: 15, P: 15
G13. hellohello

▽
P13. hellohello

▽

G: 16, P: 16
G14. %i
P14. %i

G: 8, P: 8
P15. G15.
G: -1, P: -1

G16. %
P16. %

G: 7, P: 7
P17.  G17.
G: -1, P: -1
G17.p
P17.p

G: 6, P: 6
G18.(null)   %
P18.(null)   %

▽
#include <limits.h>

G: 16, P: 16
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi test.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic -Wno-format binary_fmt.c char_fmt.c int_fmt.c helper_func.c low_hex_fmt.c null_format.c rev_fmt.c _strlen.c str_fmt.c printf.c rot13_fmt.c upp_hex_fmt.c get_format.c testfile.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic -Wno-format binary_fmt
▽





















.c char_fmt.c int_fmt.c helper_func.c low_hex_fmt.c null_format.c rev_fmt.c _strlen.c str_fmt.c printf.c rot13_fmt.c upp_hex_fmt.c get_format.c test.c

▽
vagrant@vagrant-ubuntu-trusty-64:~/printf$ ./a.out
%b

printing%bprint
printingprint
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi get_format.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ gcc -Wall -Werror -Wextra -pedantic -Wno-format binary_fmt.c char_fmt.c int_fmt.c helper_func.c low_hex_fmt.c null_format.c rev_fmt.c _strlen.c str_fmt.c printf.c rot13_fmt.c upp_hex_fmt.c get_format.c test.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ ./a.out

▽
#include <limits.h>
%b

printing%bprint
printingprint
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi low_hex_fmt.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi upp_hex_fmt.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ vi get_format.c
vagrant@vagrant-ubuntu-trusty-64:~/printf$ betty binary_fmt.c

▽


▽

▽
========== binary_fmt.c ==========

▽
# 0x10: C - printf
Write your own `printf` function. A group project for Holberton School.

## Requirements
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

## Tasks
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
-- INSERT --                                                                       1,1           Toi
