#include <string.h>
#include <iostream>
using namespace std;
template<class T>
class genClasse{
	public:
	T *estocagem;
	int *p;
	
	  genClasse(int tam){
		estocagem = new T[tam];
		p = new int[tam];
	}
};
main(){
	genClasse<string> x(50);
	genClasse<int> y(10);
	y.estocagem[0]=2;
	string a;
	a="eu";
	x.p[0]=10;
	x.estocagem[0]=a;

	
}
