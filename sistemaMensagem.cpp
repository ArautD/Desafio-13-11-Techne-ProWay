#include <iostream>
#include "sistemaMensagem.h"

MensagemTexto::MensagemTexto(std::string texto) : conteudo (texto) {}
void MensagemTexto::enviar() const{
    std::cout <<"Enviando mensagem de texto: " << conteudo << std::endl;
}

MensagemVoz::MensagemVoz(int duracao) : duracaoTempo(duracao) {}
void MensagemVoz::enviar() const {
    std::cout <<"Enviando mensagem aúdio: " << duracaoTempo << "s..." << std::endl;
}

MensagemImagem::MensagemImagem(int w, int h) : largura(w), altura (h) {}
void MensagemImagem::enviar() const{
    std::cout <<"Enviando imagem: (" << largura << "x" << altura << ")..." << std::endl;
}

void exibeMensagem(){
    system("cls");
    std::cout << "Programa de Envio de mensagens" << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    Mensagem* mensagens[3];

    mensagens[0] = new MensagemTexto("Olá como vai? Esse é o primeiro exercicio");
    mensagens[1] = new MensagemImagem(1920, 1080);
    mensagens[2] = new MensagemVoz(30);

    for (int i = 0; i < 3; i ++){
        mensagens[i] -> enviar();
    }

    for (int i = 0; i < 3; i ++){
        delete mensagens[i];
    }
}