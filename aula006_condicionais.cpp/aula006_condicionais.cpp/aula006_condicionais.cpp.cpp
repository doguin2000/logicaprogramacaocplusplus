
/*Aula de LoPAL*/

#include <iostream>
#include <string>
#include <locale>
using std::setlocale; using std::getline; using std::endl; using std::cin; using std::cout;
int main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    double media;
    cout << "Digite a média:";
    cin >> media;
    if (media < 0 || media > 10) {
        cout << "O valor foi inválido digite uma nota entre 0 e 10\n";
    }
    else {
        if (media < 5) {
            cout << "Você foi reprovado a média é:" << media << "\n";
        }
        else if (media >= 5 && media < 6) {
            cout << "Você foi aprovado com regular a média é:" << media << "\n";
        }
        else if (media > 5) {
            cout << "Você foi aprovado com a média: " << media << "\n";
        }
    }
}
