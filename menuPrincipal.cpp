#include "menuprincipal.h"
#include <iostream>

using namespace std;

// Aqui você pode incluir os headers dos sistemas (Mensagens, Mutantes, etc.)
// Exemplo:
// #include "sistemaMensagem.h"
// #include "sistemaMutantes.h"
// ...

void sistemaRPG() { cout << "Executando Sistema de RPG...\n"; }

void exibeMenuPrincipal() {
    int opcao;
    
    do {
        system("cls");
        cout << "\n===== MENU PRINCIPAL =====\n";
        cout << "1. Sistema de Mensagens\n";
        cout << "2. X-Men - Mutantes\n";
        cout << "3. Animais Fantásticos\n";
        cout << "4. Pagamentos\n";
        cout << "5. RPG\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: exibeMensagem(); 
            system("pause");
            break;
            case 2: sistemaMutante();
            system("pause");
            break;
            case 3: sistemaCriaturas(); 
            system("pause");
            break;
            case 4: sistemaFinanceiro();
            system("pause");
            break;
            case 5: sistemaRPG();
            system("pause");
            break;
            case 0: 
            system("cls");
            cout << "Saindo...\n"; break;
            default: cout << "Opção inválida!\n"; break;
        }
    } while (opcao != 0);
}
