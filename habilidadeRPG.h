#ifndef HABILIDADE_RPG_H
#define HABILIDADE_RPG_H

class Personagem{
    public:
        virtual ~Personagem() = default;
        virtual void atacar() const = 0;
        virtual void especial() const =0;
};

class Mago : public Personagem{
    public:
        void atacar() const override;
        void especial() const override;
};

class Guerreiro : public Personagem{
    public:
        void atacar() const override;
        void especial() const override;
};

class Arqueiro : public Personagem{
    public:
        void atacar() const override;
        void especial() const override;
};

void atkDnd();

#endif