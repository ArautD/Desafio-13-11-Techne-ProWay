#include "sistemaMutante.h"
#include <iostream>

void Wolverine::usarPoder() const{
    std::cout << "Wolverine: Ativando garras de adamantium!" << std::endl;
}

void JeanGrey::usarPoder() const{
    std::cout << "JeanGrey: Telepatia e telecinese ativadas" << std::endl;
}

void Noturno::usarPoder() const{
    std::cout << "Noturno: BAMF! Teletransportando..." << std::endl;
}
void sistemaMutante(){
    system("cls");
    std::cout << "Programa de Envio de mensagens" << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    
    Mutante* equipe[3] = {new Wolverine (),new JeanGrey (),new Noturno ()
    };

    for (auto m: equipe) m -> usarPoder();
    for (auto m: equipe) delete m;
}
