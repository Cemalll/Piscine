#include <stdio.h>
#include <stdlib.h>

int check(char * dizi){

    int i=0;
    int j=1;
    while(i<9){
        while(j<9)
        {
            if(dizi[i]==dizi[j] || dizi[j]-dizi[i]==j-i || dizi[j]-dizi[i]==(i-j) )
            {
                return 0;  
            }
            j++;
        }
    i++;       
    }

    return 1;
}

char * upOne(char * sayi,int index){
    char x;
    while(index>0)
    {
        if(sayi[index]=='9')
        {
            char * temp = sayi;
            temp[index] -= 9;
            index--;
            
            return upOne(temp,index);
        }
        else
        {
            char * temp = sayi;
            temp[index] += 1;

            return temp;
        }
        return "aqf";
    }

    
}











int main(){
    
    char * basla= "0123456784";
    
    basla=upOne(basla,9);
    printf("%s ", basla );
    

    return 0;
}