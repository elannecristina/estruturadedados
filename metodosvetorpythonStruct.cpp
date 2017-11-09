#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 




Aluno vetor[30];
int ultimo=0;

void append(Aluno e){
	vetor[ultimo]=e;
	ultimo++;
}

//int pop(){
//	ultimo--;
//	return vetor[ultimo];
//}

Aluno pop(int p=ultimo-1){
 
 Aluno v= vetor[p];
 for(int i=p;i<ultimo;i++)
     vetor[i]=vetor[i+1];
  ultimo--; 
  return v;	  
}

int index(int valor){
	for(int i=0;i<ultimo;i++){
		if (vetor[i].mat==valor)
		    return i;
	}
	return -1;
	
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
		cout<<"Matricula:"<<vetor[i].mat<<endl;
		cout<<"Nome.....:"<<vetor[i].nome<<endl<<endl;	
	}
	
}

void inserir(int p, Aluno valor){
	 for(int i=ultimo;i>p;i--)
	    vetor[i]=vetor[i-1];
	 ultimo++;
	 vetor[p]=valor;
	
}



int count(int valor){
	int cont=0;
	for(int i=0;i<ultimo;i++){
		if (vetor[i].mat==valor)
	       cont++;	    
	}
	return cont;
	
}

int count(char *valor){
	int cont=0;
	for(int i=0;i<ultimo;i++){
		if (vetor[i].nome==valor)
		   cont++;
	//	if (strcmp(vetor[i].nome,valor)==0)
//	       cont++;	    
	}
	return cont;
	
	
	
}

int len(){
	return ultimo;
}

main(){

/*	int i=0;
	while (true){
		int resp=1;
		cout<<"Digite a matricula:";
		cin>>vetor[i].mat;
		cout<<"Digite o nome:";
		cin>>vetor[i].nome;
		i++;
		cout<<endl<<endl<<"Deseja continuar(1-Sim/2-Nao)?";
		cin>>resp;
		if (resp==2)
		    break;
		
	}*/
	Aluno a1;
	a1.mat=1;
	a1.nome="joao";
	append(a1);
	
	a1.mat=2;
	a1.nome="marcio";
	append(a1);
	/*strcpy(a1.nome,"maria");
	append(a1);
	a1.mat=3;
	strcpy(a1.nome,"karla");
	append(a1);
	a1.mat=4;
	strcpy(a1.nome,"maria");
	append(a1);*/
	
	percorre();
//	pop(1);
	
//	percorre();
	int achou = index(3);
	if (achou==-1)
	   cout<<"nao encontrou!!";
	else {
		cout<<"encontrou na posicao "<<achou<<endl;
		cout<<"Matricula:"<<vetor[achou].mat<<endl;
		cout<<"Nome.....:"<<vetor[achou].nome<<endl<<endl;	
	}
	int total=count("joao");
	cout<<"total:"<<total;  
	
}
