#ifndef SISTEMA_MUTANTE_H
#define SISTEMA_MUTANTE_H
#include <string>

class Mutante{
    public:
    virtual ~Mutante() = default;
    virtual void usarPoder() const = 0;
};

class Wolverine : public Mutante{
    public:
        void usarPoder() const override;
};

class JeanGrey : public Mutante{
    public:
        void usarPoder() const override;
};

class Noturno : public Mutante{
    public:
        void usarPoder() const override;
};

void sistemaMutante();

#endif