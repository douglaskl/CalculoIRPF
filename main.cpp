#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <math.h>
#include "Imposto.h"

using namespace std;

int main()
{
//public:
	string nome;
	int cpf;
	int idade;
	int dep;
	int declaracao;
	//void Entrada();
			
//protected:
	double base;
	double basef;
	double renda;
    double contrib;
    double imposto;   
    //double DeclarSimp();
    //double DeclarComp();
	
	//Imposto a; //classe "imposto" e objeto "a"
	
	cout << "***SISTEMA DE CADASTRO E CALCULO DO IR***" << endl << endl;
	
	//ENTRADA DE VARIÁVEIS
	cout << "Entre com modelo de declaracao: " << "1 para simplificada ou 2 para completa: ";
	cin >> declaracao;
	cout << endl;
	
	//Entrada();
	cout << "Entre com nome: ";
	cin >> nome;
	
	cout << "Entre com CPF: ";
	cin >> cpf;
	
	cout << "Entre com total de rendimentos: ";
	cin >> renda;
	
	cout << "Entre com a contribuicao previdenciaria: ";
	cin >> contrib;
	
	//DECLARACAO SIMPLIFICADA
	if (declaracao == 1)
	{
		//DeclarSimp();
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
	
	//DECLARACAO COMPLETA
	else if (declaracao == 2)
	{
		//DeclarComp();
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
}
