#include <stdio.h>

int main()                                         
{                 
            int N  , i ,D , resultat;
            
            
            printf("entrer un nombre entier:");
            scanf("%d",&N);
            resultat =0 ;
            for(i=1 ; i<=N; i++){
               D=N%i;
            
                if(D==0){
              
                 resultat=resultat + 1 ;
                }
                }
                   if(resultat==2)
                        printf(" premier");
                   else if(resultat>2) 
                        printf("pas premier");
                
           
    return 0;
}