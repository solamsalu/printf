#include "main.h"

/**
 * get_width - Calculate the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
<<<<<<< HEAD
 * Return: width.
 */

int get_width(const char *format, int *i, va_list list)

=======
 *	
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
>>>>>>> 6d91168fa63df762470c90c5aff775d26f742778
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
<<<<<<< HEAD
	*i = curr_i - 1;
=======

	*i = curr_i - 1;

>>>>>>> 6d91168fa63df762470c90c5aff775d26f742778
	return (width);
}
