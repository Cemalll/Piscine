
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>
/*void yazdir(){
  for (int i=0; i<10 ; i++){
        for(int j=0; j<10; j++){
            printf("%d ",dizi[i][j]);;
        }
        printf("\n");
    }
       
}
*/

int isFill(int array[10][10], int satir, int sutun){
    //yatay
    for (int i=0; i<10 ; i++){
        if(array[satir][i]==1)
        {
             printf("1");
        return 0;
        }else {
          printf("2");  
        }
       
        
    }
    
    //dikey
    for (int i=0; i<10 ; i++){
        if(array[i][sutun]==1)
        return 0;
    }
    
    
    //çapraz
    for (int i=0; i<10 ; i++){
        for(int j=0; j<10; j++){
            
        }
    }
    
    return 1;
}

int main()
{
    int satir=0,sutun=0;
    int dizi[10][10];
    //sıfır atama
    for (int i=0; i<10 ; i++){
        for(int j=0; j<10; j++){
            dizi[i][j]=0;
        }
    }
    

    
    dizi[0][0]=1;
    int result= isFill(dizi,4,5);
    if(result==1){
        dizi[satirsutun]
    }
    printf("gelen veri = %d",result);
    /*
      for (int i=0; i<10 ; i++){
        for(int j=0; j<10; j++){
         
          if(check) dizi[i][j]=0;
          else if(check) dizi[i][j]=1;
        }
        printf("\n");
    }
    */
    
    
    
    
    
    
    //yazdırma
    printf("Yazdırma başladı\n");
     for (int i=0; i<10 ; i++){
        for(int j=0; j<10; j++){
            printf("%d ",dizi[i][j]);;
        }
        printf("\n");
    }
    return 0;
}
