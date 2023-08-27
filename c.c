#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int     *ft_range(int start, int end)
{
    int a = end - start + 1;
    int i = 0;
    int *b;
    b = (int *)malloc(sizeof(int) * a + 1);
    while (i < a)
    {
        b[i] = start;
        i++;
        start++;
        write(1,&b[i],1);
    }
    i=0;

    return b;
}

int main()
{
    int start = 8;
    int end = 15;
    int x = end - start + 1;
    int *b = ft_range(start, end);
    int i = 0;
    while (i < x)
    {
        printf("%d", b[i]);
        i++;
        if (i < x)
        printf(", ");
    }
}