#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt-BR.UTF-8");
    srand(time(nullptr)); // Inicializa a semente para gerar números aleatórios

    cout << "Bem-vindo ao jogo de ímpar e par!" << endl;

    int escolhaUsuario;
    cout << "Escolha para par ou 1 para ímpar: ";
    cin >> escolhaUsuario;

    if (escolhaUsuario != 0 && escolhaUsuario != 1) {
        cout << "Escolha inválida. Por favor, escolha 0 para par ou 1 para ímpar." << endl;
        return 1;
    }

    int numeroUsuario;
    cout << "Escolha um número: ";
    cin >> numeroUsuario;

    int numeroComputador = rand() % 10 + 1; // Gera um número aleatório entre 1 e 10
    cout << "Número do computador: " << numeroComputador << endl;

    int soma = numeroUsuario + numeroComputador;

    cout << "Soma: " << soma << endl;

    bool ehPar = (soma % 2 == 0);

    if ((ehPar && escolhaUsuario == 0) || (!ehPar && escolhaUsuario == 1)) {
        cout << "Você ganhou! Parabéns!" << endl;
    }
    else {
        cout << "Você perdeu! Melhor sorte da próxima vez!" << endl;
    }

    return 0;
}
