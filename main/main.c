#include "my.h"
#include <stdio.h>

int main() 
{
	char c;

	c = 'a';
	printf("%c | ", c);
	printf("%d\n", c);

	c = 'A';
	printf("%c | ", c);
	printf("%d\n", c);

	c = '0';
	printf("%c | ", c);
	printf("%d\n", c);

	c = 'b';
	if (c == 'b')
		printf("c est egal a 'b'\n");
	if (c == 98)
		printf("c est egal a 98\n");
}