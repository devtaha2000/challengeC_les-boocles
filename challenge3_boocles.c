#include <stdio.h>

int main()                                         
{                 
            int N  , i ;
            float D ;
            
            printf("entrer un nombre entier:");
            scanf("%d",&N);
            for(i=2 ; i<N; i++)
                D=N%i;
                 if ( D!=0 ){
                   printf("  cette nomber est  premier  ");
                 }
               else 
                   printf("  cette nomber est pas premier  ");
            
        
        
        
           
    return 0;
}
