#include "main.h"

void close_file(int file);
/**
 * close_file - Closes file descriptors.
 * @file: The file descriptor to be closed.
 */
void close_file(int file)
{
	int c;

	c = close(file);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}

/**
 *main -a program that copies the content of a file to another file.
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int rfile, wfile, file, copyfile;
	char *txt;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	txt = malloc(sizeof(char) * 1024);
	if (txt == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file = open(argv[1], O_RDONLY);
	rfile = read(file, txt, 1024);
	copyfile = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	do {
		if (file == -1 || rfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(txt);
			exit(98);
		}

		wfile = write(copyfile, txt, rfile);
		if (copyfile == -1 || wfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(txt);
			exit(99);
		}

		rfile = read(file, txt, 1024);
		copyfile = open(argv[2], O_WRONLY | O_APPEND);

	} while (rfile > 0);

	free(txt);
	close_file(file);
	close_file(copyfile);
	return (0);
}
