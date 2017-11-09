#include <stdlib.h>
#include <stdio.h>

void adicao(int v1,int v2) {
   int res;
   
   res=v1+v2;
   
   printf("O valor da soma eh %d\n",res);
      }

main(){
   int a,b;    
   printf("Digite o 1o numero: ");
   scanf("%d",&a);
   printf("Digite o 2o numero: ");
   scanf("%d",&b);
       
       
      adicao(a,b);
      
      system("pause");       
 }
