#include "main.h"

void print_buffer(char buffer[], int *buffIndex);

/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of printed characters
 */
int _printf(const char *format, ...)
{
    int currentIndex, totalPrinted = 0, totalPrintedChars = 0;
    int formatFlags, fieldWidth, precisionValue, dataSize, bufferIndex = 0;
    va_list list;
    char buffer[BUFF_SIZE];

    if (format == NULL)
        return (-1);

    va_start(list, format);

    for (currentIndex = 0; format && format[currentIndex] != '\0'; currentIndex++)
    {
        if (format[currentIndex] != '%')
        {
            buffer[bufferIndex++] = format[currentIndex];
            if (bufferIndex == BUFF_SIZE)
                print_buffer(buffer, &bufferIndex);
            totalPrintedChars++;
        }
        else
        {
            print_buffer(buffer, &bufferIndex);

            formatFlags = fetch_precission(format, &currentIndex);
            fieldWidth = get_width(format, &currentIndex, list);
            precisionValue = get_precision(format, &currentIndex, list);
            dataSize = fetch_size(format, &currentIndex);
            currentIndex++;

            totalPrinted = handle_print(format, &currentIndex, list, buffer,
                                         formatFlags, fieldWidth, precisionValue, dataSize);

            if (totalPrinted == -1)
                return (-1);

            totalPrintedChars += totalPrinted;
        }
    }

    print_buffer(buffer, &bufferIndex);
    va_end(list);

    return (totalPrintedChars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of characters
 * @buffIndex: Pointer to the buffer index, represents the length
 */
void print_buffer(char buffer[], int *buffIndex)
{
    if (*buffIndex > 0)
        write(1, &buffer[0], *buffIndex);

    *buffIndex = 0;
}
