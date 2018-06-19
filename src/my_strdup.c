#include <stdlib.h>
#include "my.h"

char	*my_strdup(char *src)
{
	int i;
	char *str;

	i = 0;
	if (src == NULL)
		return (NULL);
	str = malloc((my_strlen(src) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (src[i] != '\0') {
		str[i] = src[i]
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}