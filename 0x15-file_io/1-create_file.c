#include "main.h"

/**
 *create_file - a function that creates a file.
 *@filename: a pointer to the name of file
 *@text_content: string to write to the file
 *Return: the actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	int ofile, wfile, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	ofile = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wfile = write(ofile, text_content, i);

	if (ofile == -1 || wfile == -1)
		return (-1);

	close(ofile);
	return (1);
}
