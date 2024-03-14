// ex008aula.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <math.h>
#include <locale>
using std::setlocale; using std::string; using std::cout; using std::getline; using std::cin;

void main()
{
	setlocale(LC_ALL, "pt-BR.UTF8");
	int a;
	int y;
	int e;
	cout << "Me dê dois números: \n";
	cin >> a;
	cin >> e;
	y = (a + e) % 2;
	if (y == 0) {
		cout << "Esse número é par\n";
	}
	else {
		cout << "Esse número é impar\n";
	}
}
