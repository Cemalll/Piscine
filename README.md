void    ft_putchar(char c);

void    rush(int x, int y)
{
int tempy=y,tempx=x; //dik y yatay x
while (tempy>0)
{   
    tempx=x;
    if (tempy==y)
    {
       ft_putchar('/');
    }
    else if(tempy==1) ft_putchar('\\');


    while (tempx>0) 
    {
       if (tempy == 1 || tempy == y) 
       {
        if (tempx==1||tempx == x)
        {
        }else 
        {
            ft_putchar('i');
        }
       }else{
            if(tempx==1||tempx == x) ft_putchar('i'); else ft_putchar(' ');
       }
       tempx--;
    }

    if (tempy==y)
    {
       ft_putchar('\\');
    }else if(tempy==1) ft_putchar('/');

    ft_putchar('\n');
    tempy--;

}
}
