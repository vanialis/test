char	low_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}