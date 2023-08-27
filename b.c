#include <unistd.h>
#include <stdio.h>

int c1(char *str, char a, int s)
{
    int i = 0;
    while (i < s)
    {
        if (str[i] == a)
            return 0;
        i++;
    }
    return 1;
}

int c2(char *str, char a)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == a)
            return 0;
        i++;
    }
    return 1;
}

void ft_union(char *str, char *str2)
{
    int i = 0;
    while (str[i])
    {   
        if (c1(str, str[i], i) == 1)
        {
            write(1, &str[i], 1);
        }
        i++;
    }

    i = 0;
    while (str2[i])
    {   
        if (c2(str, str2[i]) == 1)
        {
            if (c1(str2, str2[i], i) == 1)
            {
                write(1, &str2[i], 1);
            }
        }
        i++;
    }
}

int main(int ac, char **ag)
{
    if (ac == 3)
        ft_union(ag[1], ag[2]);
    write(1, "\n", 1);
}