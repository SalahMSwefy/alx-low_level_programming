#include "main.h"

/**
 *append_text_to_file -  function that appends text at the end of a file.
 *@filename: a pointer to the name of file
 *@text_content: a string to read and print
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ofile, wfile, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	ofile = open(filename, O_WRONLY | O_APPEND);
	wfile = write(STDOUT_FILENO, text_content, i);

	if (ofile == -1 || wfile == -1)
		return (-1);

	close(ofile);
	return (1);
}
