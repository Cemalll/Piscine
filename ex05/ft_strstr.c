char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*pattern;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		start = str;
		pattern = to_find;
		while (*str == *pattern && *str && *pattern)
		{
			str++;
			pattern++;
		}
		if (*pattern == '\0')
			return (start);
		str = start + 1;
	}
	return NULL;
}
