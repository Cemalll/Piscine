#include <stdlib.h>

char *ft_strdup(char *src) {
    if (src == NULL)
        return NULL;
    int len = 0;
    while (src[len] != '\0')
        len++;
    char *dup_str = (char *)malloc((len + 1) * sizeof(char));
    if (dup_str == NULL)
        return NULL;
    int i = 0;
    while (i < len) {
        dup_str[i] = src[i];
        i++;
    }
    dup_str[len] = '\0';
    return dup_str;
}
