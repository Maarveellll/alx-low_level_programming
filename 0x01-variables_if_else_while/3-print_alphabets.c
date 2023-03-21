#include <stdio.h>
#include <stblib.h>
#include <time.h>


/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{

	char low;

	for (low = 'a': low <= 'Z'; low++)
		putchar(low);


	for (low = 'A'; low <= 'z'; low ++)
		putchar(low);
	putchar(low);
	putchar('\n');

	return (0);
}

