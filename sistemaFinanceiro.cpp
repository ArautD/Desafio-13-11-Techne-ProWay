#include "sistemaFinanceiro.h"
#include <iostream>

void PagamentoPix::processar() const{
    std::cout << "Pagamento em Pix: Processando transferência instantânea" << std::endl;
}

void PagamentoCartaoCredito::processar() const{
    std::cout << "Pagamento em Crédito: Autorizando transação via operadora" << std::endl;
}

void PagamentoBoleto::processar() const{
    std::cout << "Pagamento em Boleto: Registrando boleto em banco" << std::endl;
}

void sistemaFinanceiro(){
    system("cls");
    std::cout << "Programa de Pagamentos" << std::endl;
    std::cout << "------------------------------------------------" << std::endl;

    Pagamento* tipoPagamento[3] = {new PagamentoPix(), new PagamentoCartaoCredito(), new PagamentoBoleto()
    };

    for (int i = 0; i < 3; i ++){
        tipoPagamento[i] -> processar();
    }

    for (int i = 0; i < 3; i ++){
        delete tipoPagamento[i];
    }

}