/* Hey there, code voyagers! 🚀📄 */
/* Feast your eyes upon the creation of brilliance! */
/* Behold, the file 'fetch_flags.c' */
/* Authored with love and expertise by Adams Adeyiga */
/* and Odunaro Samson! 💻❤️ */
/* Remember, folks: when these two unite, code magic takes flight! 🌟✨ */

#include "main.h"

/**
 * fetch_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */

int fetch_size(const char *format, int *i)

{

	int curr_i = *i + 1;

	int size = 0;

	if (format[curr_i] == 'l')

		size = S_LONG;

	else if (format[curr_i] == 'h')

		size = S_SHORT;

	if (size == 0)

		*i = curr_i - 1;

	else

		*i = curr_i;

	return (size);
}
