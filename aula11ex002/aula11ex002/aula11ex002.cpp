#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <random>
#include <math.h>
using std::cout; using std::string; using std::fixed;
using std::endl;using namespace std; using std::getline; using std::cin;

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");
    for (int i = 0; i < 1; i++) {
        cout << "Olá Cliente!\n";
    }
    while (true) {
        string sair = " ";
        cin >> sair;
        cout << "\n";
        while (sair != "S" || sair != "N") {
            cout << "\nQuer sair [S/N]: ";
            cin >> sair;
            cout << "\n";
            if (sair == "S" || sair == "N") {
                break;
            }
            else {
                cout << "\nDigite apenas S ou N\n";
            }
        }
        if (sair == "S") {
            cout << "Voce saiu do Progrma\n";
            for (int i = 0; i < 42; i++) {

                cout << " ";
                if (i == 18) {
                    cout << "FIM";
                }
            };
            break;
        }
    }
}