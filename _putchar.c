/* Hey there, code voyagers! 🚀📄 */
/* Feast your eyes upon the creation of brilliance! */
/* Behold, the file 'putchar.c' */
/* Authored with love and expertise by Adams Adeyiga and Odunaro Samson! 💻❤️ */
/* Remember, folks: when these two unite, code magic takes flight! 🌟✨ */

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
