char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int tofind;

	i = 0;
	tofind = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		tofind = 0;
		while (str[i + tofind] == to_find[tofind])
		{
			if (to_find[tofind + 1] == '\0')
			{
				return (str + i);
			}
			tofind++;
		}
		i++;
	}
	return (0);
}
