#include "main.h"

/**
 *read_textfile - a function that reads a text file
 *and prints it to the POSIX standard output.
 *@filename: a pointer to the name of file
 *@text_content: the text to read and print
 *Return: the actual number of letters it could read and print
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ofile, wfile,i=0;

	if (filename == NULL)
		return (-1);
	while(text_content!=NULL)
		i++;

	ofile = open(filename, O_CREAT|O_RDWR|O_TRUNC,0600);
	wfile = write(STDOUT_FILENO, text_content, i);

	if (ofile == -1 ||  wfile == -1 )
		return (-1);
		
	close(ofile);
	return (1);
}
