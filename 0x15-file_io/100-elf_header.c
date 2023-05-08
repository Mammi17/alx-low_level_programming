#include <elf.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* control- verify the file to check if is a ELF
* @id: the ELF struct
* Return: void
*/

void control(unsigned char *id)
{
	if (*(id) == 127 && *(id + 1) == 'E' &&
	    *(id + 2) == 'L' && *(id + 3) == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
		exit(98);
	}
}

/**
* magic - print magic number
* @id: the ELF struct
* Return: void func
*/

void magic(unsigned char *id)
{
	int a, l;

	l = EI_NIDENT - 1;
	printf("  Magic:   ");
	a = 0;
	while (a < l)
	{
		printf("%02x ", *(id + a));
		a++;
	}
	printf("%02x\n", *(id + a));
}

/**
* class - print the class of the ELF
* @id: the ELF struct
* Return: void
*/

void class(unsigned char *id)
{
	printf("Class:                             ");
	if (id[EI_CLASS] == ELFCLASSNONE)
		printf("This class is invalid\n");
	else if (id[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (id[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", id[EI_CLASS]);
}

/**
* data - print mthe type of data
* @id: the ELF struct
* Return: void func
*/

void data(unsigned char *id)
{
	printf("Data:                              ");
	if (id[EI_DATA] == ELFDATANONE)
		printf("Unknown data format\n");
	else if (id[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (id[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", id[EI_DATA]);
}

/**
* version - print the version of the file
* @id: the ELF struct
* Return: void
*/

void version(unsigned char *id)
{
	printf("Version:                           ");
	if (id[EI_VERSION] == EV_CURRENT)
		printf("%d (current)\n", EV_CURRENT);
	else
		printf("%d\n", id[EI_VERSION]);
}

/**
 * osabi - print the osabi
 * @id: the ELF struct
 * Return: void
 */
void osabi(unsigned char *id)
{
	printf("OS/ABI:                            ");
	if (id[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (id[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (id[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (id[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (id[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (id[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (id[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (id[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (id[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (id[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", id[EI_OSABI]);
}

/**
* type - print the type
* @id: the ELF struct
* @tpe: data to compare and print.
* Return: void
*/

void type(unsigned int tpe, unsigned char *id)
{
	id[EI_DATA] == ELFDATA2MSB ? tpe = tpe >> 8 : tpe;

	printf("Type:                              ");
	if (tpe == ET_NONE)
		printf("NONE (Unknown type)\n");
	else if (tpe == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (tpe == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (tpe == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (tpe == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", tpe);
}

/**
* entry - print the entry point
* @id: the ELF struct
* @entrie: integer unsigned
* Return: void
*/

void entry(unsigned int entrie, unsigned char *id)
{
	if (id[EI_DATA] == ELFDATA2MSB)
		entrie = REV(entrie);

	printf("Entry point address:               ");
	printf("%#x\n", (unsigned int)entrie);
}

/**
* main - read a ELF file
* @argc: the number of args
* @argv: Argument
* Return: 0 in success
*/

int main(int argc, char *argv[])
{
	int a, r, clo;
	Elf64_Ehdr *fiche;

	if (argc > 2 || argc < 2)
	{
		dprintf(STDERR_FILENO, "Usage: error in # of args\n"), exit(98); }
	fiche = malloc(sizeof(Elf64_Ehdr));
	if (fiche == NULL)
	{
		dprintf(STDERR_FILENO, "error in allocate memory\n"), exit(98); }
	a = open(*(argv + 1), O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	r = read(a, fiche, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(fiche);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	control(fiche->e_ident);
	magic(fiche->e_ident);
	class(fiche->e_ident);
	data(fiche->e_ident);
	version(fiche->e_ident);
	osabi(fiche->e_ident);
	printf("ABI Version: ");
	printf("%i\n", fiche->e_ident[EI_ABIVERSION]);
	type(fiche->e_type, fiche->e_ident);
	entry(fiche->e_entry, fiche->e_ident);
	free(fiche);
	clo = close(a);
	if (clo)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(98); }
	return (0);
}
