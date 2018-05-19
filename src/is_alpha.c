int	is_alpha(char c)
{	
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		return (0);
	return(1);
}

int my_is_alpha(char c)
{
	if (		(c >= '0' && c <= '9')
		|| 	(c >= 'A' && c <= 'Z')
		|| 	(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}