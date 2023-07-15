void    ft_putchar(char c);

void    rush(int x, int y)
{
    
    if(x<1 || y<1){
        return ;
    }
    else if(x==1 && y==1){ ft_putchar('/'); ft_putchar('\n'); return ;}
    int    i;
    
    i = x;

     ft_putchar('/');
     
    while(i-2 > 0){
       ft_putchar('*');
       i--;
    }
    ft_putchar('\\');
    ft_putchar('\n');






    i = x;


    while(y>0){
        i = x;
        ft_putchar('*');
        while (i-2 > 0)
    { 
       ft_putchar(32);
       i--;
    }
    ft_putchar('*');
    ft_putchar('\n');
    y--;
    }
    //alt satır
    i = x;
     ft_putchar('\\');
    while(i-2 > 0){
       ft_putchar('*');
       i--;
    }
    ft_putchar('/');
    ft_putchar('\n');
    
}

