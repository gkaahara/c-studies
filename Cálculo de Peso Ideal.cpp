#include <iostream>
#include <cmath>
using namespace std;
int main (int argc, char** arg)
{
	int opcao;
	float altura,pim,pif;
	
	cout<<"Escolha 1 para Peso Ideal Masculino, ou 2 para Peso Ideal Feminino."<<endl;
	cin>>opcao;
	
	if (opcao==1){
		cout<<"Digite a sua altura em metros: "<<endl;
		cin>>altura;
		pim=((72.7*altura)-58);
		cout<<"Seu peso ideal seria: "<<pim<<"kg"<<endl;
	}
	else if (opcao==2){
		cout<<"Digite a sua altura em metros: "<<endl;
		cin>>altura;
		pif=((62.1*altura)-44.7);
		cout<<"Seu peso ideal seria: "<<pif<<"kg"<<endl;
	}
	
	return 0;
}
