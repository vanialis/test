#include <stdlib.h>

char	*my_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (src[i] != '\0') {

		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';	
	return (dest);
}