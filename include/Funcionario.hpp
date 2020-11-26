#ifndef __FUNCIONARIO__
#define __FUNCIONARIO__
#include <iostream>

using std::string;

enum tipoFunca {
    Veterinario,
    Tratador
};

class Funcionario {
   private:
    virtual std::ostream& imprimeDados(std::ostream&) const = 0;

   protected:
    int id;
    string nome;
    string cpf;
    tipoFunca classificacao;
    string celularProfissional;
    string email;

   public:
    Funcionario();

    Funcionario(
        int id,
        string nome,
        string cpf,
        tipoFunca classificacao,
        string celularProfissional,
        string email);
    
    virtual ~Funcionario() = 0;

    int getId();
    string getNome();
    string getCpf();
    tipoFunca getClassicicacao();
    string getCelularProfissional();
    string getEmail();

    void setNome(string nome);
    void setCpf(string cpf);
    void setClassificacao(tipoFunca classificacao);
    void setCelularProfissional(string celularProfissional);
    void setEmail(string email);

    friend std::ostream& operator<<(std::ostream& o, Funcionario& f);
};

#endif
