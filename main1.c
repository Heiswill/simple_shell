#include "shell.h"

/**
 * main - Entry point of the program.
 * @ac: argument count
 * @av: argument array
 * Return: Always 0.
 */
int main(__attribute__((unused)) int ac, char **av)
{
	char *line;
	size_t size;
	int command_counter;

	command_counter = 0;
	signal(SIGINT, SIG_IGN);
	do {
		command_counter++;
		line = NULL;
		size = 0;
		parse_line(line, size, command_counter, av);
	} while (1);

	return (0);
}
