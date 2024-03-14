

#include <iostream>
#include <string>
#include <cmath>
#include <locale>
using std::cout; using std::endl; using std::string; 
using std::getline; using std::setlocale; using std::cin;

int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    string name;
    float nota1{}, nota2, nota3, nota4;

    cout << "Digite seu nome: ";
    getline(std::cin, name);
    cout << "\nBem-vindo " << name << "\nDigite uma nota: ";
    cin >> nota1;

    if (nota1 > 10 || nota1 < 1) {
        cout << "Digite entre 0 e 10";
        return 18;

    }
    cout << "Digite a 2° nota: ";
    cin >> nota2;

    if (nota2 > 10 || nota2 < 1) {
        cout << "Digite entre 0 e 10";
        return 26;

    }
    cout << "Digite a 3° nota: ";
    cin >> nota3;

    if (nota3 > 10 || nota3 < 1) {
        cout << "Digite entre 0 e 10";
        return 34;

    }
    cout << "Digite a 4° nota: ";
    cin >> nota4;

    if (nota4 > 10 || nota4 < 1) {
        cout << "Digite entre 0 e 10";
        return 42;

    }

    double soma = nota1 + nota2 + nota3 + nota4;
    double div = soma / 4;
    cout << "A média da soma das notas são: " << div;

    if (div < 5) {
        cout << "\nVocê foi Reprovado!\n";
    }
    else (div > 5); {
        cout << "\nVocê foi aprovado!\n";
    }
}

