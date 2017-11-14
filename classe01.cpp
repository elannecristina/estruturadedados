#include <string.h>
#include <iostream>

using namespace std;

class Aluno{
	private:
		int mat;
		string nome;
	public:
		Aluno(int m,string n){
			mat=m;
			nome=n;
		}
		
		int getMat(){
			return mat;
		}
	
	    string getNome(){
	    	return nome;
		}
		
		void setMat(int mat){
			this->mat=mat;
		}
		
		void setNome(string nome){
			this->nome=nome;
		}
};

main(){
	
	Aluno a1(1,"jose");
	cout<<"Matri: "<<a1.getMat()<<endl;
	cout<<"Nome: "<<a1.getNome()<<endl;
	a1.mat=2;
	Aluno *a2=new Aluno(2,"Maria");
	cout<<"Matri: "<<a2->getMat()<<endl;
	cout<<"Nome: "<<a2->getNome()<<endl;
	
	Aluno *a3=&a1; // ponteiro a3 recebe endereco de a1
	Aluno *a3=a1; // vai dar errado, ponteiro nao pode receber variavel a1
	Aluno *a3=a2; // ponteiro a3 recebe endereco de ponteiro a2 
	cout<<"a2:"<<a2<<endl;
	cout<<"a3:"<<a3<<endl;
	cout<<"Matri: "<<a3->getMat()<<endl;
	cout<<"Nome: "<<a3->getNome()<<endl;
	
}
