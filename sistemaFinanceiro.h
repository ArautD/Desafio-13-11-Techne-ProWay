#ifndef SISTEMA_FINANCEIRO_H
#define SISTEMA_FINANCEIRO_H

class Pagamento{
    public:
        virtual ~Pagamento() = default;
        virtual void processar() const = 0;
};

class PagamentoPix : public Pagamento{
    public:
        void processar() const override;
};

class PagamentoCartaoCredito : public Pagamento{
    public:
        void processar() const override;
};

class PagamentoBoleto : public Pagamento{
    public:
        void processar() const override;
};

void sistemaFinanceiro();

#endif