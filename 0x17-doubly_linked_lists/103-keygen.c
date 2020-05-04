#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int part_1(int);
int part_2(char *, int);
int part_3(char *, int);
int part_4(char *, int);
int part_5(char *, int);
int part_6(char);


/**
 * main - entry point
 * @ac: len argv
 * @argv: arguments list
 * Return: 0 if sucess, -1 if fail
 */


int main(int ac, char *argv[])
{
	char letters[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *username;
	char *output;

	int lenght;
	int p;

	(void) ac;
	output = malloc(sizeof(char) * 6);
	if (!output || ac != 2)
		return (-1);

	username = argv[1];
	lenght = strlen(username);
	p = part_1(lenght);
	strncat(output, &letters[p], 1);

	p = part_2(username, lenght);
	strncat(output, &letters[p], 1);

	p = part_3(username, lenght);
	strncat(output, &letters[p], 1);

	p = part_4(username, lenght);
	strncat(output, &letters[p], 1);

	p = part_5(username, lenght);
	strncat(output, &letters[p], 1);

	p = part_6(username[0]);
	strncat(output, &letters[p], 1);
	printf("%s\n", output);

	return (0);
}


/**
 * part_1 - for index 0
 * @len: len of username
 * Return: int key
 */

int part_1(int len)
{
	return ((len ^ 0x3b) & 0x3f);
}

/**
 * part_2 - for index 1
 * @username: pointer to username
 * @len: len username
 * Return: int key
 */

int part_2(char *username, int len)
{
	int i;
	int rsi = 0;

	for (i = 0; i < len; i++)
		rsi += username[i];

	return ((rsi ^ 0x4f) & 0x3f);
}

/**
 * part_3 - for index 2
 * @username: pointer to username
 * @len: len username
 * Return: int key
 */

int part_3(char *username, int len)
{
	int i;
	int rsi = 1;

	for (i = 0; i < len; i++)
		rsi *= username[i];

	return ((rsi ^ 0x55) & 0x3f);
}

/**
 * part_4 - for index 3
 * @username: pointer to username
 * @len: len username
 * Return: int key
 */

int part_4(char *username, int len)
{
	int rsi = username[0];
	int i;

	for (i = 0; i < len; i++)
	{
		if (username[i] > rsi)
			rsi = username[i];
	}

	srand(rsi ^ 0xe);

	return (rand() & 0x3f);
}

/**
 * part_5 - for index 4
 * @username: pointer to username
 * @len: len username
 * Return: int key
 */

int part_5(char *username, int len)
{
	int i;
	int rsi = 0;

	for (i = 0; i < len; i++)
		rsi += username[i] * username[i];

	return ((rsi ^ 0xef) & 0x3f);
}

/**
 * part_6 - for index 5
 * @ch: char, username[0]
 * Return: int key
 */

int part_6(char ch)
{
	int rsi = 0;
	int i;

	for (i = 0; i < ch; i++)
	{
		rsi = rand();
	}
	return ((rsi ^ 0xE5) & 0x3f);
}
