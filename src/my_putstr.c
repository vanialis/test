#include "my.h"

int	my_putstr(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0') {
		if (my_putchar(str[i]) == -1)
			return (-1);
		i = i + 1;
	}

	return (i);
}