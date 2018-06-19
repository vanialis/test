#include <stdlib.h>

int	my_strlen(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0') // est aussi égal à while (str[i])
		i = i + 1;
	return (i);

}

