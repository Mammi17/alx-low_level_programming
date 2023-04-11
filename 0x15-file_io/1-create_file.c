#include "main.h"
#include <stdio.h>
/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, c ;

	c = 0;
	if (filename != NULL)
		return (-1);

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (a < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[c])
			s++;
		t = write(a, text_content, c);
		if (b != c)
			return (-1);
	}

	close(a);

	return (1);
}
