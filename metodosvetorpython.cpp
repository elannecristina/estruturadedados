#include <stdio.h>
#include <iostream>
using namespace std;

int vetor[30];
int ultimo=0;

void append(int e){
	vetor[ultimo]=e;
	ultimo++;
}

//int pop(){
//	ultimo--;
//	return vetor[ultimo];
//}

int pop(int p=ultimo-1){
 
 int v= vetor[p];
 for(int i=p;i<ultimo;i++)
     vetor[i]=vetor[i+1];
  ultimo--; 
  return v;	  
}

void remove(int valor){
   int p=index(valor);
   if (p!=-1){
   	  for(int i=p;i<ultimo;i++)
          vetor[i]=vetor[i+1];
       ultimo--; 
   }	
}

void percorre(){
	for(int i=0;i<ultimo;i++){
		cout<<vetor[i]<<endl;	
	}
	
}

void inserir(int p, int valor){
	 for(int i=ultimo;i>p;i--)
	    vetor[i]=vetor[i-1];
	 ultimo++;
	 vetor[p]=valor;
	
}

int index(int valor){
	for(int i=0;i<ultimo;i++){
		if (vetor[i]==valor)
		    return i;
	}
	return -1;
	
}

int count(int valor){
	
	
}

int len(){
	return ultimo;
}

main(){
	append(20);
	append(10);
	append(5);
	append(24);
	percorre();
	pop(1);
	
	percorre();
	int achou = index(50);
	if (achou==-1)
	   cout<<"nao encontrou!!";
	else
	   cout<<"encontrou na posicao "<<achou;
	
	
}
