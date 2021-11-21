#include<stdio.h>

 #include<stdio.h>

  int main(){
         int i ,j,X,N;
         int Tab[20];
            printf("veuiller saisir la taille de tableaux:");
            scanf("%d",&N);
            for(i=0;i<N;i++){
                 printf("\nentrer value:%d=",i);
                 scanf("%d",&Tab[i]);
            }
           
            for(i=0;i<N;i++)
            printf("%d",Tab[i]);
             for(i=0;i<N-1;i++)
             for(j=i+1;j<N;j++){
                 if(Tab[i]>Tab[j]){
                      X=Tab[i];
                 Tab[i]=Tab[j];
                 Tab[j]=X;
                 }
                
                }
                printf("\n*****apre le triage:");
               for(i=0;i<N;i++)
            printf("%d",Tab[i]);
                    
                    
                    
  
                
                
       return 0;
    
      
      
  }