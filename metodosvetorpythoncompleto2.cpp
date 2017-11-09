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
	   cout<<"nao encontrou!!";
	else
	   cout<<"encontrou na posicao "<<achou<<"\n";
	pop(1);
	percorre();
	
}
