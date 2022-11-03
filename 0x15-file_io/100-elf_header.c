#include <stdio.h>
#include <elf.h>
/**
 * get_type - gets the file type
 * @elfheader: ponter to header
 * Return: nothing
 */
void get_type(Elf64_Ehdr *elfheader)
{
	printf("%-35s", "Type:");
	switch (elfheader->e_type)
	{
		case ET_NONE:
			printf("NONE (unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
	}
}

/**
 * main - main
 * @argv: argument vector
 * @argc: argument count
 * Return: 1 on success, error otherwise
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
