#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; //this describes no. of letters it should read and print
	ssize_t nrd, nwr;
	char *ch;

	if (!filename)
		return (0); //if fliname cannot be opened or read

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!ch)
		return (0);

	nrd = read(fd, ch, letters);
	nwr = write(STDOUT_FILENO, ch, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
