#include <iostream>

using std::string;

enum tipoFunca {
    Veterinario,
    Tratador
};

class Funcionario {
   private:
   protected:
    string nome;
    string cpf;
    tipoFunca classificacao;
    string celularProfissional;
    string email;

   public:
    virtual std::ostream& imprimeDados(std::ostream&) const = 0;
    Funcionario(
        string nome,
        string cpf,
        tipoFunca classificacao,
        string celularProfissional,
        string email);
    ~Funcionario();

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
