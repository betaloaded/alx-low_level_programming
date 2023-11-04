#include "main.h"
/**
  * create_file - function to create a file
  * @filename: name of file
  * @text_content: content
  * Return: 1
  */
int create_file(const char *filename, char *text_content)
{
	int of;
	int n;
	int wr;

	if (filename == NULL)
		return (-1);
	of = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (of == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (n = 0; text_content[n]; n++)
		;

	wr = write(of, text_content, n);
	if (wr == -1)
		return (-1);
	close(of);
	return (1);
}
