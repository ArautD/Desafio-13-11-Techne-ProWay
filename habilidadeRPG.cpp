#include "habilidadeRPG.h"
#include <iostream>
#include <vector>

void Mago::atacar() const{
    std::cout << "Mago: Lançando bola de Fogo!" << std::endl;
}
void Guerreiro::atacar() const{
    std::cout << "Guerreiro: Golpeando com espada pesada!" << std::endl;
}

void Arqueiro::atacar() const{
    std::cout << "Arqueiro: Disparando flecha precisa!" << std::endl;
}

void atkDnd(){
    system("cls");
     std::cout << "Caçadores de Dragões hora do ataque!!!" << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    
    std::vector<std::unique_ptr<Personagem>> equipe;
    equipe.push_back(std::make_unique<Mago>()); //verificar o que isso faz com detalhes
    equipe.push_back(std::make_unique<Guerreiro>());
    equipe.push_back(std::make_unique<Arqueiro>());

    for (const auto& Personagem : equipe){
        Personagem->atacar();
    }
}