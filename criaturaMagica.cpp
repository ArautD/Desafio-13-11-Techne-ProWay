#include "criaturaMagica.h"
#include <iostream>
#include <string>
#include <vector>

void Grifo::emitirSom() const{
    std::cout << "Grifo: Grrraaahhh" << std::endl;
}

void Dragao::emitirSom() const{
    std::cout << "Dragão: Rooooar!" << std::endl;
}

void Fenix::emitirSom() const{
    std::cout << "Fenix: Escute com atenção, você não tem inimigos, ninguém tem" << std::endl;
}

void fazerBarulho(CriaturaMagica* c){
    c->emitirSom();
}

void sistemaCriaturas(){
    system("cls");
    std::cout << "Programa de criaturas mágicas" << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    std::vector<CriaturaMagica*> criaturas = {new Grifo(), new Dragao(), new Fenix()};
    for (auto c : criaturas) fazerBarulho(c);
    for (auto c : criaturas) delete c;
}