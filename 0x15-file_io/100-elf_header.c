#include "main.h"
#include <elf.h>

/**
 * display_error - main function
 * @message: the message
 * Return: void as in none
 */
void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}
/**
 * display_elf_header_info - main function
 * @elf_header: as name suggets
 * Return: void as in none
 */
void display_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);

	printf("\n");

	printf("  Class:                             %s\n",
	elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
	elf_header->e_ident[EI_DATA] == ELFDATA2LSB ?
	"2's complement, little-endian" : "2's complement, big-endian");
	printf("  Version:                           %d (current)\n",
	elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n",
	elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n",
	elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d (ET_EXEC)\n",
	elf_header->e_type);
	printf("  Entry point address:               0x%lx\n",
	(unsigned long)elf_header->e_entry);
}

/**
 * main - main function
 * @argc: count
 * @argv: array of char
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	const char *elf_filename = argv[1];
	int fd = open(elf_filename, O_RDONLY);
	Elf64_Ehdr elf_header;

	if (argc != 2)
		display_error("Usage: elf_header elf_filename");
	if (fd == -1)
		display_error("Cannot open ELF file");
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
		display_error("Cannot read ELF header");

	if (lseek(fd, 0, SEEK_SET) == (off_t)-1)
		display_error("Cannot seek to the beginning of the file");

	display_elf_header_info(&elf_header);

	close(fd);
	return (0);
}

