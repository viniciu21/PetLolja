#include "./Funcionario.hpp"

enum nivelDeSeguranca {
    Verde = 5,
    Azul,
    Vermelho
};

class FuncionarioTratador : public Funcionario {
   private:
    nivelDeSeguranca classificacaoDeSeguranca;
    std::ostream& imprimeDados(std::ostream& os) const;

   public:
    FuncionarioTratador(string nome,
                        string cpf,
                        tipoFunca classificacao,
                        string celularProfissional,
                        string email,
                        nivelDeSeguranca classificacaoDeSeguranca);
    ~FuncionarioTratador();
};
