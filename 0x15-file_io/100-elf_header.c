#include "main.h"
#include <elf.h>

void is_elf(unsigned char *magic);
void show_class(unsigned char *class);
void show_magic(unsigned char *magic);
void show_version(unsigned char *version);
void show_data(unsigned char *class);
void show_os_abi(unsigned char *version);
void show_abi(unsigned char *version_abi);
void close_elf_file(int elf);
void show_type(unsigned int type, unsigned char *class);
void show_entry(unsigned long int entry, unsigned char *class);

/**
 * is_elf - Determine if a file is an ELF or not
 * @magic: A pointer to the string containing the ELF magic numbers
 *
 * Description: Exit 98 if the file is not an ELF
 */

void is_elf(unsigned char *magic)
{
	int error = 0;

	if (magic[0] != 127)
		error += 1;
	if (magic[1] != 'E')
		error += 1;
	if (magic[2] != 'L')
		error += 1;
	if (magic[3] != 'F')
		error += 1;
	if (error > 0)
	{
		dprintf(STDERR_FILENO, "Error: This is not an ELF file\n");
		exit(98);
	}
}

/**
 * show_class - Displays the class of an ELF file
 * @class: A pointer to the string containing the ELF class
 */

void show_class(unsigned char *class)
{
	printf("  Class:                             ");

	unsigned char elf_class = class[EI_CLASS];

	if (elf_class == ELFCLASSNONE)
		printf("none\n");
	else if (elf_class == ELFCLASS32)
		printf("ELF32\n");
	else if (elf_class == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", elf_class);
}

/**
 * show_magic - Displays the magic numbers of an ELF header
 * @magoc: A pointer to a string containing the ELF magic numbers
 */
void show_magic(unsigned char *magic)
{
	int i = 0;

	printf("  Magic:   ");
	while (i < EI_NIDENT)
	{
		printf("%02x", magic[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
		i++;
	}
}

/**
 * show_version - Displays the version of an ELF header
 * @version: A pointer to an array containing the ELF version
 */
void show_version(unsigned char *version)
{
	printf("  Version:                           %d", version[EI_VERSION]);
	if (version[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * show_data - Displays the data of an ELF header
 * @class: A pointer to an array containing the ELF class
 */
void show_data(unsigned char *class)
{
	printf("  Data:                              ");
	if (class[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (class[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (class[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", class[EI_CLASS]);
}

/**
 * show_os_abi - Displays the OS/ABI of an ELF header
 * @version: A pointer to an array containing the ELF version
 */

void show_os_abi(unsigned char *version)
{
	printf("  OS/ABI:                            ");
	if (version[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (version[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (version[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (version[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else if (version[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (version[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (version[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (version[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (version[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (version[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else
		printf("<unknown: %x>\n", version[EI_OSABI]);
}

/**
 * show_abi - Displays the ABI version of an ELF header
 * @version_abi: A pointer to an array containing the ELF ABI version
 */
void show_abi(unsigned char *version_abi)
{
	printf("  ABI Version:                       %d\n",
			version_abi[EI_ABIVERSION]);
}

/**
 * close_elf_file - Closes an ELF file
 * @elf: The file descriptor of the ELF file
 * Description: If the file cannot be closed - exit code 98
 */
void close_elf_file(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: We couldn't close the file fd %d\n", elf);
		exit(98);
	}
}

/**
 * show_type - Displays the type of an ELF header
 * @type: The ELF type
 * @class: A pointer to an array containing the ELF class
 */

void show_type(unsigned int type, unsigned char *class)
{
	if (class[EI_DATA] == ELFDATA2MSB)
		type >>= 8;
	printf("  Type:                              ");
	if (type == ET_NONE)
		printf("NONE (None)\n");
	else if (type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

/**
 * show_entry - Displays the entry point of an ELF header
 * @entry: The address of the ELF entry point
 * @class: A pointer to an array containing the ELF class
 */
void show_entry(unsigned long int entry, unsigned char *class)
{
	printf("  Entry point address:               ");
	if (class[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (class[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);
	else
		printf("%#lx\n", entry);
}

/**
 * main - Displays the information at the start of an ELF file
 * @argc: Number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 if success
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, read_return;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: We cannot read the file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		close_elf_file(fd);
		dprintf(STDERR_FILENO, "Error: We cannot read the file %s\n", argv[1]);
		exit(98);
	}
	read_return = read(fd, header, sizeof(Elf64_Ehdr));
	if (read_return == -1)
	{
		free(header);
		close_elf_file(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: File Not Found\n", argv[1]);
		exit(98);
	}
	is_elf((*header).e_ident);
	printf("ELF Header:\n");
	show_magic((*header).e_ident);
	show_class((*header).e_ident);
	show_data((*header).e_ident);
	show_version((*header).e_ident);
	show_os_abi((*header).e_ident);
	show_abi((*header).e_ident);
	show_type((*header).e_type, (*header).e_ident);
	show_entry((*header).e_entry, (*header).e_ident);
	free(header);
	close_elf_file(fd);
	return (0);
}
