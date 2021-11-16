#include <stdio.h>

int main()                                         
{
             int   i, a , nomber;
             
           printf("entrer un nomber :");
           scanf("%d",&a);
           for (i=1 ; i<10 ; i++){
               nomber = a*i ;   
                  printf("%d x %d = %d \n ",a , i , nomber); 
           }
    return 0;
}