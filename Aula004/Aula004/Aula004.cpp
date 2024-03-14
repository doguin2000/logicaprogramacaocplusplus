/*Senai
Dia 22/02*/

#include <iostream>
#include <string>
#include <locale>
using std::cout; using std::endl; using std::setlocale; using std::string;
using std::cin; using std::getline; 
void main()
{
    setlocale(LC_ALL, "pt-BR.UTF-8");
    string nome;
    cout << "Olá, digite o seu nome: \n";
    getline(std::cin, nome);
    cout << "Olá " << nome << " Bom dia!!!\n";
   

    string sex, ender;
    int data;
    cout << "Digite seu Endereço: \n ";
    getline(std::cin, ender);
    cout << "Qual seu sexo: ";
    getline(std::cin, sex);
    cout << "Idade: ";
    cin >> data;
    cout << "\n"<< nome << ", Verifique seus dados: \nEndereço: " << ender << "\n";
    cout << "Sexo: " << sex << "\n";
    cout << "Aniversário: " << data << "\n";

}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
