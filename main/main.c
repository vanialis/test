#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int son;

	son = my_strcmp("pote", "pot");
	printf("%d\n", son);
	return(0);
}
