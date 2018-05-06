int square_root(int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < nb) {
		j = i * i;
		if (j == nb)
			return (i);
		else
			j = j + 1;


		i = i + 1;
	}
	return (-1);
}

int my_square_root(int nb)
{
	int i;

	i = 0;
	while (i < nb / 2){
		if (i * i == nb)
			return (i);
		i++;
	}
	return (-1);
}