#include "main.h"
#include <elf.h>

/**
 * get_class_string - Get the string representation of the ELF class.
 * @e_ident: The class value from the ELF header.
 *
 * Return: A pointer to the string representation.
 */
const char *get_class_string(unsigned char e_ident)
{
	switch (e_ident)
	{
		case ELFCLASS32:
			return ("ELF32");
		case ELFCLASS64:
			return ("ELF64");
		default:
			return ("Unknown");
	}
}

/**
 * get_data_string - Get the string representation of the ELF data encoding.
 * @e_ident: The data encoding value from the ELF header.
 *
 * Return: A pointer to the string representation.
 */
const char *get_data_string(unsigned char e_ident)
{
	switch (e_ident)
	{
		case ELFDATA2LSB:
			return ("2's complement, little-endian");
		case ELFDATA2MSB:
			return ("2's complement, big-endian");
		default:
			return ("Unknown");
	}
}

/**
 * get_osabi_string - Get the string representation of the ELF OS/ABI.
 * @e_ident: The OS/ABI value from the ELF header.
 *
 * Return: A pointer to the string representation.
 */
const char *get_osabi_string(unsigned char e_ident)
{
	switch (e_ident)
	{
		case ELFOSABI_NONE:
			return ("UNIX - System V");
		case ELFOSABI_HPUX:
			return ("HP-UX");
		case ELFOSABI_NETBSD:
			return ("NetBSD");
		default:
			return ("Unknown");
	}
}

/**
 * get_type_string - Get the string representation of the ELF type.
 * @e_type: The type value from the ELF header.
 *
 * Return: A pointer to the string representation.
 */
const char *get_type_string(Elf64_Half e_type)
{
	switch (e_type)
	{
		case ET_NONE:
			return ("NONE (Unknown type)");
		case ET_REL:
			return ("REL (Relocatable file)");
		case ET_EXEC:
			return ("EXEC (Executable file)");
		case ET_DYN:
			return ("DYN (Shared object file)");
		case ET_CORE:
			return ("CORE (Core file)");
		default:
			return ("Unknown");
	}
}

/**
 * display_error - Display an error message and exit with code 98.
 * @message: The error message to display.
 *
 * Return: This function does not return.
 */
void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * display_elf_header_info - Display information from the ELF header.
 * @elf_header: A pointer to the ELF header structure.
 *
 * This function displays information from the ELF header, including magic
 * class, data encoding, version, OS/ABI, ABI version, type, and entry poin
 */
void display_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);

	printf("\n");

	printf("  Class:                             %s\n",
	get_class_string(elf_header->e_ident[EI_CLASS]));
	printf("  Data:                              %s\n",
	get_data_string(elf_header->e_ident[EI_DATA]));
	printf("  Version:                           %d (current)\n",
	elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
	get_osabi_string(elf_header->e_ident[EI_OSABI]));
	printf("  ABI Version:                       %d\n",
	elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
	get_type_string(elf_header->e_type));
	printf("  Entry point address:               0x%lx\n",
	(unsigned long)elf_header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 for success.
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
