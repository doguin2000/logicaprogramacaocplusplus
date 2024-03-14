// exaula04mat.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <locale>
#include <math.h>
using std::cout; using std::endl; using std::setlocale; using std::string;
using std::cin; using std::getline;
int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    string nome;
    cout << "Qual seu nome? ";
    getline(std::cin, nome);
    cout << "Olá " << nome << " Seja Bem vindo!\n";
    int n1, n2;
    cout << "Digite um número: \n";
    cin >> n1;
    cout << "Digite outro número: \n";
    cin >> n2;
    double soma = n1 + n2;
    cout << "A soma: " << n1 << "+" << n2 << "=" << soma << "\n";

}