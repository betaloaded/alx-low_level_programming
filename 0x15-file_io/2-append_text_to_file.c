#include "main.h"
/**
  * append_text_to_file - function to append text to file
  * @filename: name of file
  * @text_content: content of text
  * Return: 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int wr;
	int of;

	if (filename == NULL)
		return (-1);
	of = open(filename, O_WRONLY | O_APPEND);

	if (of == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
		wr = write(of, text_content, i);

		if (wr == -1)
			return (-1);
	}
	close(of);
	return (1);
}
