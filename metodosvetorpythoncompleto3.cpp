#include <stdio.h>
#include <iostream>
using namespace std;

int vetor[30];
int ultimo=0;
void append(int e){
	vetor[ultimo]=e;
	ultimo++;
}

void pop(){
	ultimo--;
}

void pop(int p){
	for(int i=p;i<ultimo-1;i++)
		vetor[i]=vetor[i+1];
	ultimo--;
}
void remove(int valor){
	
}

void percorre(){
	for(int i=0;i<ultimo;i++){
		cout<<vetor[i]<<endl;	
	}
	
}

void inserir(int p, int valor){
	for(int i=ultimo;i>p;i--)
		vetor[i]=vetor[i-1];
	vetor[p]=valor;
	ultimo++;
	
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
	return ultimo+1;
}

main(){
	append(20);
	append(10);
	append(5);
	append(15);
	percorre();
	int achou = index(15);
	if (achou==-1)
	   cout<<"nao encontrou a posicao!!";
	else
	   cout<<"encontrou na posicao "<<achou<<endl;
//	pop(2);
///	percorre();
	inserir(1,40);
	percorre();
	
}
