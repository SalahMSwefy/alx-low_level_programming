#include "main.h"

/**
 *read_textfile - a function that reads a text file
 *and prints it to the POSIX standard output.
 *@filename: a pointer to the name of file
 *@letters: number of letters to read and print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ofile, rfile, wfile;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	ofile = open(filename, O_RDONLY);
	rfile = read(ofile, str, letters);
	wfile = write(STDOUT_FILENO, str, rfile);

	if (ofile == -1 || rfile == -1 || wfile == -1 || wfile != rfile)
	{
		free(str);
		return (0);
	}
	free(str);
	close(ofile);
	return (wfile);
}
