#include <iostream>
#include <locale>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <random>
#include <math.h>
using std::cout; using std::string; using std::fixed; using std::endl;
using namespace std; using std::getline; using std::cin;

void main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");
    int i;
    cout << "Escolha 1:1, 2:2 ou 5:5: ";
    cin >> i;
    if (i < 2) {
        for (i = 0; i < 11; i = i + 1) {
            cout << " O valor é de: " << i << endl;
        }
    }

    else if (i < 3) {
        for (i = 0; i < 21; i = i + 2) {
            cout << " O valor é de: " << i << endl;
        }
    }

    else if (i < 6) {
        for (i = 0; i < 51; i = i + 5) {
            cout << " O valor é de: " << i << endl;
        }
    }
}