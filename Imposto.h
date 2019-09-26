#ifndef IMPOSTO_H
#define IMPOSTO_H


class Imposto
{
    public:
        Imposto();
        virtual ~Imposto();

        string nome;
        int cpf;
        int idade;
        int dep;
        int declaracao;
        void Entrada();

    protected:

    private:

        double base;
        double basef;
        double renda;
        double contrib;
        double imposto;
        double DeclarSimp();
        double DeclarComp();
};

#endif // IMPOSTO_H
