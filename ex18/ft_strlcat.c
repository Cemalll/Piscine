#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = 0;
    unsigned int src_len = 0;
    unsigned int total_len = 0;

    while (dest[dest_len] != '\0')
        dest_len++;
    while (src[src_len] != '\0')
        src_len++;
    total_len = dest_len;
    while (*src != '\0' && dest_len + 1 < size)
    {
        dest[dest_len] = *src;
        dest_len++;
        src++;
    }
    dest[dest_len] = '\0';
    return total_len + src_len;
}
