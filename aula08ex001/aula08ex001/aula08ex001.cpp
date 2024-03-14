/**/
#include <iostream>
#include <string>
#include <cmath>
#include <locale>

using std::cout; using std::setlocale; using std::string; 
using std::endl; using std::cin; using std::getline; using std::pow;
int main()
{
    float altura, peso;
    cout << "Digite seu peso: ";
    cin >> peso;
    cout << "Digite sua altura: ";
    cin >> altura;
    double pot = altura * altura;
    double imc = peso / pot;
    cout << "Seu indice de IMC: " << imc << "\n";

    if ((imc < 16.9)) {
        cout << "Muito abaixo do peso";
    }
    else if ((imc > 17.0) && (imc < 18.4)) {
        cout << "Abaixo do peso";
    }
    else if ((imc > 18.5) && (imc < 24.9)) {
        cout << "Peso normal";
    }
    else if ((imc > 25.0) && (imc < 29.9)) {
        cout << "Acima do peso";
    }
    else if ((imc > 30) && (imc < 34.9)) {
        cout << "Obesidade I";
    }
    else if ((imc > 35.0) && (imc < 40.0)) {
        cout << "Obesidade II";
    }
    else if ((imc > 40.0)) {
        cout << "Obesidade III";
    }
}
