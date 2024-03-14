/* aula03 operações matemáticas
* @autor: Luiz Henrique
*date: 02/15/23
* version 1.0*/

#include <string>
#include <locale>
#include <iostream>
using std::cout;
using std::string;
//classe principal

int main() {
	setlocale(LC_ALL, "pt-BR.UTF-8");
	int number = 10;
	int number2 = 5;
	double resultado = number + number2;
	cout << "------Programa Matemático-----\n"
	<< "Olá soma de " << number << "+" << number2
	<< " = " << resultado << "\n"
	<< "-------------FIM-----------";
}