#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer
 * @text_content: content to append into the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, c;

	c = 0;
	if (!filename)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1 || b != c)
		return (-1);
	if (text_content)
	{
		while (text_content[c])
			c++;
		b = write(a, text_content, c);
	}
	close(a);
	return (1);
}
