/* Hey there, code voyagers! 🚀📄 */
/* Feast your eyes upon the creation of brilliance! */
/* Behold, the file 'fetch_flags.c' */
/* Authored with love and expertise by Adams Adeyiga */
/* and Odunaro Samson! 💻❤️ */
/* Remember, folks: when these two unite, code magic takes flight! 🌟✨ */

#include "main.h"

/**
 * fetch_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */

int fetch_width(const char *format, int *i, va_list list)

{

	int curr_i;

	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)

	{

		if (is_digit(format[curr_i]))

		{

			width *= 10;

			width += format[curr_i] - '0';
		}

		else if (format[curr_i] == '*')

		{

			curr_i++;

			width = va_arg(list, int);

			break;
		}

		else

			break;
	}

	*i = curr_i - 1;

	return (width);
}
