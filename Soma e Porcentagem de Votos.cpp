#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, char** arg)

{
int validos,brancos,nulos,total;
float pvalidos1,pvalidos2,pbrancos1,pbrancos2,pnulos1,pnulos2;

	cout<<"Insira o numero de votos validos: "<<endl;
	cin>>validos;
	cout<<"Insira o numero de votos em branco: "<<endl;
	cin>>brancos;
	cout<<"Insira o numero de votos nulos: "<<endl;
	cin>>nulos;
	
	total=validos+brancos+nulos;
	pvalidos1=validos*100;
	pbrancos1=brancos*100;
	pnulos1=nulos*100;
	pvalidos2=pvalidos1/total;
	pbrancos2=pbrancos1/total;
	pnulos2=pnulos1/total;
	
	cout<<"O total de votos foi de "<<total<<", sendo que "<<pvalidos2<<"% foram validos, "<<pbrancos2<<"% foram em branco e "<<pnulos2<<"% foram votos nulos."<<endl;
	
	return 0;
	}

