char *ft_strdup(char *src) 
{
    if (src == NULL)
        return NULL;

    int len = 0;
    while (src[len] != '\0')
        len++;

    char *dest = (char *)malloc((len + 1) * sizeof(char));
    if (dest == NULL)
        return NULL;

    for (int i = 0; i < len; i++)
        dest[i] = src[i];

    dest[len] = '\0';
    return dest;
}
