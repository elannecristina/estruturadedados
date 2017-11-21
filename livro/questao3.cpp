#include <stdio.h>
#include <iostream>
using namespace std;
int intArray[]={1,2,3}, *p=intArray;

main(){

	cout<<" *p++   :"<<*p++<<endl;
	cout<<" p "<<*p<<endl;
	cout<<endl;
	for(int i=0;i<3;i++)
	    cout<<" intArray ["<<i<<"]="<<intArray[i]<<endl;
	cout<<" (*p)++ :"<<(*p)++<<endl; //modifica o conteudo do vetor
	cout<<endl;
	for(int i=0;i<3;i++)
	    cout<<" intArray ["<<i<<"]="<<intArray[i]<<endl;
	cout<<" p "<<*p;
	
	
}
