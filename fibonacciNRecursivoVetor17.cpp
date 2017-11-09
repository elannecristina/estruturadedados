#include <stdio.h>
#include <iostream>
using namespace std;

void fibonaci(int n, int v[]){
	
	for(int i=0;i<=n;i++){
		if (i==0)
		   v[i]=0;
		else{
			if ((i==1) || (i==2))
			   v[i]=1;
			else
			   v[i]=v[i-1]+v[i-2];	
			
		}
	}
}

void teste(int* valor){
    *valor=*valor+1;
	cout<<" testando valor na funcao="<<*valor<<endl;
	
}

main(){
	int n;
	int *endereco;
	int v=22;
	endereco=&v;
	teste(endereco);
	cout<<" testando valor na funcao="<<*endereco<<endl;
	
	
	cout<<"endereco do ponteiro"<<endereco<<endl;
	cout<<"endereco de v"<<&v<<endl;
	cout<<"valor do ponteiro"<<*endereco<<endl;
	
	
	
	cout<<"Digite o valor de n:";
	cin>>n;
	int vetor[n];
	
	fibonaci(n,vetor);
	cout<<"o valor de n"<<n<<endl;
	
	for(int i=1;i<=n;i++)
	   cout<<vetor[i]<<endl;
	
	
}
