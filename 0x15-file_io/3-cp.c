#include "main.h"
/**
  * error_file - function to print errors
  * @file_from: file copy from
  * @file_to: file copy to
  * @argv: arg vector
  */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
  * main - main function
  * @argc: argument counter
  * @argv: argumnt vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n, wr;
	char alloc[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	n = 1024;
	while (n == 1024)
	{
		n = read(file_from, alloc, 1024);
		if (n == -1)
			error_file(0, -1, argv);
		wr = write(file_to, alloc, n);


		if (wr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
