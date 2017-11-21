#include <iostream>
using namespace std;
class Classe1{
	public:
		virtual  void f(){
			cout <<"Funcao  f() na classe1\n";
		}
		
		void g(){
			cout<<"Funcao g() na classe1\n";
		}
};

class Classe2{
	public:
		virtual void f(){
			cout <<"Funcao  f() na classe2\n";
		}
		
		void g(){
			cout<<"Funcao g() na classe2\n";
		}
};

main(){
	Classe1 objeto1;
	Classe2 objeto2;
//	objeto1.f();
//	objeto1.g();
	Classe1 *p;
	p=&objeto1;
	cout<<"antes do cast\n";
	p->f();
	p->g();
	cout<<"depois\n";
	p=&objeto2;
	p->f();
	p->g();
	
	
	
	
}
