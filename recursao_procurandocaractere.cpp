#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int caracter(char c,char s[]){
	if (s[0]=='\0')
	    return 0;
	if (s[0]==c) 
	 	return (1+caracter(c,++s)); 
    return caracter(c,++s);        
}

main(){
  char s[30],c;
  int t;  
  printf("Busca em string\n\n"); 
  printf("\nDigite a string:"); 
  gets(s); 
  //scanf("%s",s); 
  //cin>>s;
  fflush(stdin);
  printf("\nDigite o caractere desejado:"); 
  //scanf("%c",&c); 
  c=getchar();  
  t=caracter(c,s); 
   printf("\n\nEncontrei %d vezes", t); 
  // printf("%d", t); 

}
