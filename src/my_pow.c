int my_pow(int nb, int pow)
{
	int i;
	int j;

	i = 0;
	j = nb;
	if (pow == 0)
		return (1);
	while (i < pow - 1)
	{
		j = j*nb;
		i = i + 1;
	}
	return(j);
}

int my_my_pow(int nb, int pow)
{
	int ret;

	ret = nb;
	if (pow == 0)
		return (1);
	while (pow){
		ret *= nb;
		pow--;
	}
	return (ret);
}