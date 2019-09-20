#include <iostream>
#include <string>
//#include <calculo.h>

using namespace std;

int main()
{
	float renda;
    float contrib;

	string nome;
	int cpf;
	int idade;
	int dep;
	int declaracao;
	
	//Imposto cidadao; //classe imposto e objeto cidadão
	
	cout << "SISTEMA DE CADASTRO E CALCULO DO IR" << endl << endl;
	
	//ENTRADA DE VARIÁVEIS
	cout << "Entre com modelo de declaracao: " << "1 para simplificada ou 2 para completa: ";
	cin >> declaracao;
	cout << endl;
	
	cout << "Entre com nome: ";
	cin >> nome;
	
	cout << "Entre com CPF: ";
	cin >> cpf;
	
	if (declaracao == 2)
	{
		cout << "Entre com idade: ";
		cin >> idade;
	
		cout << "Entre com numero de dependentes: ";
		cin >> dep;

	}
	
	cout << "Entre com total de rendimentos: ";
	cin >> renda;
	
	cout << "Entre com a contribuicao previdenciaria: ";
	cin >> contrib;
	

}
