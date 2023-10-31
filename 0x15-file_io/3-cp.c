#include "main.h"

/**
 * main - start of runs in the function
 * @argc: the number of arguments
 * @argv: list of arguments, size of argc
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int ffrom, fto, fread, fclfrom, fclto;
	char buffer[1024];

	if (argc > 3 || argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ffrom = open(*(argv + 1), O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fto = open(*(argv + 2), O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((fread = read(ffrom, buffer, 1024)) > 0)
	{
		if (fto == -1 || (write(fto, buffer, fread) != fread))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fread < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fclfrom = close(ffrom);
	if (fclfrom < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", ffrom), exit(100);
	fclto = close(fto);
	if (fclto < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fto), exit(100);
	return (0);
}
