#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
char    **ft_split(char *str)
{
    int i = 0;
    char **b;
    char *a;

    //cemal baba sadasdasd seni çok güzel
    while (str[i])
    {
        while (str[i] != 32 || str[i] != 9 || str[i] != 10)
        {
            b = (char **)malloc(sizeof(char) * str[i]);

            i++; 
        }
        i++;
    }

}

int main()
{
    char *str;
    str = "cemal gumus";
    ft_split(str);
    //char ** result = ft_split(str);
}