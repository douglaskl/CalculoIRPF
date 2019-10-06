#include <iostream>
#include <string>

using namespace std;

class Imposto
{
public:
	string nome;
	int cpf;
	int idade;
	int dep;
	int declaracao;
			
	double base;
	double basef;
	double renda;
    double contrib;
    double imposto;   
    double DeclarSimp();
    double DeclarComp();
};


//FUNÇÕES
double Imposto::DeclarSimp()
{
	base = renda-contrib;
	basef = base - (base*(5.0/100));  //desconto único de 5%

	if ((basef>0) && (basef<=12000))
		imposto = 0;
	
	else if ((basef>12000) && (basef<24000))
		imposto = (basef-12000)*(15.0/100);
	
	else 
		imposto = (12000*(15.0/100)) + (basef-24000)*(27.5/100);	
		
	cout << "Imposto a pagar: " << imposto;			
}

double Imposto::DeclarComp()
{
	cout << "Entre com idade: ";
	cin >> idade;

	cout << "Entre com numero de dependentes: ";
	cin >> dep;
	
	if (idade<65)
	{
		if (dep <= 2)
		{
			base = renda - contrib;
			basef = base - (base*(2.0/100));
		}
			
		else if (dep>=3 && dep<=5)
		{
			base = renda - contrib;
			basef = base - (base*(3.50/100));
		}
		
		else
		{
			base = renda - contrib;
			basef = base - (base*(5.0/100));	
		}
	}
	
	if (idade>=65)
	{
		if (dep <= 2)
		{
			base = renda - contrib;
			basef = base - (base*(3.0/100));
		}
			
		else if ((dep>=3) && (dep<=5))	
		{
			base = renda - contrib;
			basef = base - (base*(4.5/100));
		}
			
		else
		{
			base = renda - contrib;
			basef = base - (base*(6.0/100));	
		}
	}
	
	if (basef>0 && basef<=12000)
		imposto = 0;
		
	else if (basef>12000 && basef<24000)
		imposto = (basef-12000)*(15.0/100);
		
	else 
		imposto = (12000*(15.0/100)) + (basef-24000)*(27.5/100);	
	
	cout << "Imposto a pagar: " << imposto;			
}



int main()
{
	Imposto a; //classe "imposto" e objeto "a"
	
	cout << "SISTEMA DE CADASTRO E CALCULO DO IR" << endl << endl;
	
	//ENTRADA DE VARIÁVEIS
	cout << "Entre com modelo de declaracao: " << "1 para simplificada ou 2 para completa: ";
	cin >> a.declaracao;
	cout << endl;
	
	cout << "Entre com nome: ";
	cin >> a.nome;
	
	cout << "Entre com CPF: ";
	cin >> a.cpf;
	
	cout << "Entre com total de rendimentos: ";
	cin >> a.renda;
	
	cout << "Entre com a contribuicao previdenciaria: ";
	cin >> a.contrib;	
	
	//DECLARACAO SIMPLIFICADA
	if (a.declaracao == 1)
	{
		a.DeclarSimp();	
	}
	
	//DECLARACAO COMPLETA
	else if (a.declaracao == 2)
	{
		a.DeclarComp();
	}
	
	return 0;
}
