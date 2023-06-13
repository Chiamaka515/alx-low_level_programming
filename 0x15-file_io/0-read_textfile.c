#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints it to stdout
 * @filename: pointer to the name of the file
 * @letters: The number of letters to read and print
 *
 * Return: 0 if the function fails or filename is NULL
 *         w - the actual number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t o;
	ssize_t w;
	ssize_t r;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(o);
	return (w);
}
