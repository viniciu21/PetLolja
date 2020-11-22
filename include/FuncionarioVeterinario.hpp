#include "./Funcionario.hpp"

class FuncionarioVeterinario : public Funcionario {
   private:
    bool isInscritoCRMV;

   public:
    std::ostream& imprimeDados(std::ostream& os) const;
    FuncionarioVeterinario(string nome,
                           string cpf,
                           tipoFunca classificacao,
                           string celularProfissional,
                           string email,
                           bool isInscritoCRMV);
    ~FuncionarioVeterinario();
};
