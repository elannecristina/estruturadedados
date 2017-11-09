#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int ant,prox=0;
	int num=1;
	int cont=1;
	while (cont<=6){
		prox=ant+num;
		ant=num;
		num=prox;
		cont++;
	}
	cout<<"o termo é "<<prox;
	return 1;
}
