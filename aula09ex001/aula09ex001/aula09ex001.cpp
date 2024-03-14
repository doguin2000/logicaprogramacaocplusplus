// aula09ex001.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <math.h>
#include <locale>
#include <iomanip>
using std::cout; using std::getline; using std::endl; using std::cin; using std::setlocale; using std::fixed; using std::setprecision;


int main()
{
	float saldo, sacar, depositar, investir, valor;
	double porc;
	int escolha;
	saldo = 5000;
	setlocale(LC_ALL, "pt-BR.UTF-8");
	cout << "======================\nSeu saldo: R$"<< saldo << "\nEscolha a opção: \n1-Depositar\n2-Sacar\n3-Investir\n================\nDigite: ";
	cin >> escolha;

	if (escolha < 1 || escolha > 3){
		cout << "Valor inválido! Digite de 1 a 3";
		return 1;
	}
	else if (escolha == 1){
		cout << "Você escolheu deposito.\nDeposite um valor: R$:";
		cin >> valor;
		depositar = saldo + valor;
		cout << "Seu saldo agora é R$:" << depositar;
	}
	else if (escolha == 2) {
			cout << "Você escolheu saque.\nSaque um valor: R$:";
			cin >> valor;
		sacar = saldo - valor;
		if (valor > 5000 ){
			cout << "Não foi possivel sacar!";
			return 1;
		}	
		cout << "Agora seu saldo é: R$" << sacar;
		
	}
	else if (escolha == 3) {
		cout << "Você escolheu investir.\nInvista um valor R$:";
		cin >> valor;
		porc = ((valor / 100) * 35);
		saldo = porc + saldo + valor;
		cout << "Seu saldo atual é: R$:" << saldo;
	}
}
