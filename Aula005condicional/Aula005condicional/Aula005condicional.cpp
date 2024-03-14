// Aula005condicional.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include <locale>
using std::cout; using std::endl; using std::cin; using std::setlocale;
using std::getline;

int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    float nota1, nota2, nota3, nota4;
    cout << "Digite sua 1° nota: ";
    cin >> nota1;
    cout << "Digite sua 2° nota: ";
    cin >> nota2;
    cout << "Digite sua 3° nota: ";
    cin >> nota3;
    cout << "Digite sua 4° nota: ";
    cin >> nota4;
    double soma = nota1 + nota2 + nota3 + nota4;
    cout << "A soma das suas notas: " << nota1 << "+" << nota2 << "+" << nota3 << "+" << nota4 << "=" << soma << "\n";
    int var2 = 4;
    double media = soma / var2;

    cout << "A sua media foi: " << soma << "/" << var2 << "=" << media << "\n";

    if (media < 5.0) {
        cout << "Sua média foi ruim.\n";
    }
    else if (media >= 5.0 && media < 7.0) {
        cout << "Sua média foi mediana.\n";
    }
    else if (media >= 7.0 && media < 9.0) {
        cout << "Sua média foi boa.\n";
    }
    else {
        cout << "Sua média foi excelente.\n";
    }
    
    return 0;




    std::cout << "\n";
}
