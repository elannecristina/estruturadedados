#include <stdio.h>
#include <iostream>
using namespace std;

main(){
	char s[30];
	cout<<"digite o valor";
	gets(s);
	
	cout<<"digite o caractere procurado:";
	char busca = getchar();
	int cont=0,ocorrencia=0;
	
	while (true){
		if (s[cont]=='\0')
		   break;
		if (s[cont]==busca)
		    ocorrencia++;
		cont++;
				
	}
	
	cout<<"aconteceu "<<ocorrencia<<" vezes.";
	
	
}
