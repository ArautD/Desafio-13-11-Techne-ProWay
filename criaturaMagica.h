#ifndef CRIATURA_MAGICA_H
#define CRIATURA_MAGICA_H

class CriaturaMagica {
    public:
        virtual ~CriaturaMagica() = default;
        virtual void emitirSom() const = 0;
};

class Grifo : public CriaturaMagica{
    public:
        void emitirSom() const override;
};

class Dragao : public CriaturaMagica{
    public:
        void emitirSom() const override;
};

class Fenix : public CriaturaMagica{
    public:
        void emitirSom() const override;
};

void fazerBarulho(CriaturaMagica* c);

void sistemaCriaturas();

#endif