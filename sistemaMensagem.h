#ifndef SISTEMA_MENSAGEM_H
#define SISTEMA_MENSAGEM_H
#include <string>

using namespace std;

class Mensagem{
    public:
        virtual ~Mensagem() = default;
        virtual void enviar() const = 0;
};

class MensagemTexto : public Mensagem{
    private:
        string conteudo;
    public:
        MensagemTexto(string texto);
        void enviar() const override;
        
};

class MensagemVoz : public Mensagem{
    private:
        int duracaoTempo;
    public:
        MensagemVoz(int duracao);
        void enviar() const override;
};

class MensagemImagem : public Mensagem{
    private:
        int largura, altura;
    public:
        MensagemImagem(int w, int h);
        void enviar() const override;
};

void exibeMensagem();

#endif