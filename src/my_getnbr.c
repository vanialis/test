#include <stdlib.h>
#include "my.h"

int	my_getnbr(char *str) // 123
{
	int nb;
	int i;

	i = 0;
	nb = 0;
	
		
	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + (str[i] - '0');
		i = i + 1; 
	}
	if (str[0] == '-')
		nb = -nb;

	return (nb);
}