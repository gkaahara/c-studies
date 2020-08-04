#include <iostream>
using namespace std;
int main (int argc, char** arg)
{
	int codigo,quantidade;
	float total;
	
	cout<<"Digite o codigo do produto comprado: "<<endl;
	cin>>codigo;
	cout<<"Digite a quantidade comprada:"<<endl;
	cin>>quantidade;
	
	switch (codigo){
		case 10:
			total=quantidade*5.32;
			cout<<"O preco total da compra foi de: R$"<<total;
			break;
		case 11:
			total=quantidade*6.45;
			cout<<"O preco total da compra foi de: R$"<<total;
			break;
		case 20:
			total=quantidade*2.37;
			cout<<"O preco total da compra foi de: R$"<<total;
			break;
		case 25:
			total=quantidade*5.32;
			cout<<"O preco total da compra foi de: R$"<<total;
			break;
		case 30:
			total=quantidade*6.45;
			cout<<"O preco total da compra foi de: R$"<<total;
			break;
		default :
			cout<<"Digite um codigo valido.";
	}
	return 0;
}
