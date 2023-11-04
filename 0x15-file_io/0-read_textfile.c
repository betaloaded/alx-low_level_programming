#include "main.h"
/**
  * read_textfile - function that reads a text file and prints to posx
  * @filename: contains file name
  * @letters: number of lettrs
  * Return: write
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t rd, wr;
	char *alloc;
	int of;

	if (filename == NULL)
	{
		return (0);
	}

	of = open(filename, O_RDONLY);

	if (of == -1)
	{
		return (0);
	}

	alloc = malloc(sizeof(filename) * (letters));

	if (!alloc)
	{
		return (0);
	}
	rd = read(of, alloc, letters);
	wr = write(STDOUT_FILENO, alloc, rd);
	close(of);
	free(alloc);
	return (wr);
}
