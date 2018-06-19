#include <stdlib.h>
#include <stdio.h>
#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
	int i;
	int cmp;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return(1);
	while (s1[i] != '\0' && s2[i] != '\0') {
		if (s1[i] == s2[i])
			cmp = 0;
		else
			cmp = 1;
		i = i + 1;
	}
	return(cmp);  
}