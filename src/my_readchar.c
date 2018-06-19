#include <unistd.h>

char	my_readchar(int fd)
{
	char c;

	c = 0;
	read(fd, &c, 1);
	return (c);
}