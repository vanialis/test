#include <stdlib.h>
#include "my.h"

char	*my_strcat(char *dest, char *src)
{
	int	i;
	int	len;
	char	*ptr;

	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	len = my_strlen(dest);
	ptr = malloc((my_strlen(src) + len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (dest[i] != '\0') {
		ptr[i] = dest[i]; 
		i = i + 1;
	}
	i = 0;
	while (src[i] != '\0') {
		ptr[i + len] = src[i];
		i = i + 1;
	}
	return (ptr);
}

char *my_my_strcat(char *dest, char *src)
{
	char 	*ptr;
	int	len;

	if (dest == NULL || src == NULL)
		return (NULL);
	len = my_strlen(dest);
	ptr = malloc((my_strlen(src) + len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	my_strcpy(ptr, dest);
	my_strcpy(&ptr[len], src);
	return (ptr);
}