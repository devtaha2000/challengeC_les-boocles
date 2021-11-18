
#include <stdio.h>
  int A , B , C , E ;
int echange(){
    
  
    
    C=A;
    A=B;
    B=C;
        printf("chengment de a=%d",A);
        printf("\nchengment de b=%d",B);
        
        A=B;
        B=A;
        printf("\navant chengme a=%d et b=%d",A,B);
        return A&&B;
} 
int main()
{     
    
      
     
      printf("veuiller saisir premier nomber:a=");
      scanf("%d",&A);
      printf("veuiller saisir premier nomber:b=");
      scanf("%d",&B);
      E=echange();
    
    
    
}