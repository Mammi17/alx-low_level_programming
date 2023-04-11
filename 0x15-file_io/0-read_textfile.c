#include "main.h"
#include <stdio.h>
/**
* read_textfile - check the code for Holberton School students.
* @filename: a character
* @letters: number of letters to read and write.
* Return: void
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, n;
	char *str;

	if (filename != NULL)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1)
	{
		return (0);
	}
	n = read(a, str, letters);
	b = write(STDOUT_FILENO, str, n);
	free(str);
	close(a);
	return (b);
}
