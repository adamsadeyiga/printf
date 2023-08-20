# Custom printf Function(_printf)

This is a custom implementation of the `printf` function in C. It supports the following conversion specifiers for now:
- `%c`: Print a single character.
- `%s`: Print a null-terminated string.
- `%%`: Print a literal `%` character.

## Usage

To use the custom `_printf` function, include the provided code in your C project. You can call the function as follows:

```c
int _printf(const char *format, ...);

## Test Cases Usage
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 ../*.c main.c -o main
