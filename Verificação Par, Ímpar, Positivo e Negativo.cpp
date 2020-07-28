#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, char** arg)

{
	int numero,resto;
	
	cout<<"Insira um numero inteiro: "<<endl;
	cin>>numero;
	resto=numero%2;
	
	if ((resto==0)&&(numero>=0)){
		cout<<"Numero par e positivo!"<<endl;
	}
	else if ((resto==0)&&(numero<0)){
		cout<<"Numero par e negativo!"<<endl;
	}
	else if ((resto!=0)&&(numero>=0)){
		cout<<"Numero impar e positivo!"<<endl;
	}
	else if ((resto!=0)&&(numero<0)){
		cout<<"Numero impar e negativo!"<<endl;
	}
	return 0;
	
}
