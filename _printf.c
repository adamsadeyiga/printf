#include "main.h"

/**
 * _printf - Custom printf function that supports %c, %s, and %%
 * @format: The format string
 *
 * Return: The number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0; /* Declare count at the beginning */
    char *s;
    int c;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;  /* Move past '%' */

            /* Handle different conversion specifiers */
            switch (*format)
            {
                case 'c':
                    c = va_arg(args, int);
                    _putchar(c);
                    count++;
                    break;
                case 's':
                    s = va_arg(args, char*);
                    while (*s != '\0')
                    {
                        _putchar(*s);
                        s++;
                        count++;
                    }
                    break;
                case '%':
                    _putchar('%');
                    count++;
                    break;
                default:
                    /* Ignore unsupported specifiers */
                    break;
            }
        }
        else
        {
            _putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);
    return count;
}
