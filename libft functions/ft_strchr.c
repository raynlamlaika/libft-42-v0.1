char *ft_strchr(const char *str, int r)
{
	char *ch;
	ch =(char*) str;
	while(*ch)
	{
		if ((unsigned char)*ch == r)
			return ch;
		ch++;
	}
	while (*ch == r)
		return ch;
	return 0;
}
