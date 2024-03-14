#include <iostream>
#include <cstdlib> 
#include <cmath>
#include <ctime>
#include <iomanip>
using std::cout; using std::endl; using std::cin; using std::setlocale; using std::fixed; using std::setprecision;
using std::string;

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");
    int sku = 15;
    cout << "======================================\n";
    cout << "Olá Zyn, seja Bem-vindo a nossa arena\n";
    cout << "======================================\n";

    srand(time(0));

    int resultado = rand() % 20 + 1;
    cout << "O Goblin Skuffinho tem " << sku << "Hp";

}
int jogo() {
    return 0;
}