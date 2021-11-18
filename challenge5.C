#include <stdio.h>
 void add (int N , int M){
     int S ;
     S=N+M;
     printf("la somme de %d+%d=%d",N,M,S);
     }

int main()
{      
         int N , M ;
       printf("veuiller saisir le premier nomber:");
       scanf("%d",&N);
       printf("veuiller saisir le deuxieme nomber:");
       scanf("%d",&M);
        add ( N ,  M);
    return 0;
}
