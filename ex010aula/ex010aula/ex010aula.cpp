#include <iostream>
#include <ctime>

using namespace std;

int main() {

    int escolhaplayer;
    int pcescolha = rand() % 3 + 1; // Generate random number between 1 and 3 for computer's choice

    setlocale(LC_ALL, "pt-BR.UTF-8");
    srand(time(0)); // iniciar semente de geração

    cout << "Bem vindo ao Jokenpo!\n";
    cout << "Escolha: \n";
    cout << "1. Pedra\n";
    cout << "2. Papel\n";
    cout << "3. Tesoura\n";

    
    cout << "Sua escolha (1-3): ";
    cin >> escolhaplayer;

    if (escolhaplayer < 1 || escolhaplayer > 3) {
        cout << "Escolha inválida! Escolha um número entre 1 e 3.\n";
        return 1; // Exit program with error code 1
    }

    cout << "Escolha do PC: ";
    switch (pcescolha) {
    case 1:
        cout << "Pedra\n";
        break;
    case 2:
        cout << "Papel\n";
        break;
    case 3:
        cout << "Tesouro\n";
        break;
    }

    cout << "Resultado: ";
    if (escolhaplayer == pcescolha) {
        cout << "Empate!\n";
    }
    else if ((escolhaplayer == 1 && pcescolha == 3) ||
        (escolhaplayer == 2 && pcescolha == 1) ||
        (escolhaplayer == 3 && pcescolha == 2)) {
        cout << "Você venceu!\n";
    }
    else {
        cout << "PC venceu!\n";
    }

    return 0;
}
