#ifndef __FUNCIONARIOVETERINARIO__
#define __FUNCIONARIOVETERINARIO__
#include "Funcionario.hpp"

class FuncionarioVeterinario : public Funcionario {
   private:
    bool isInscritoCRMV;
    std::ostream& imprimeDados(std::ostream& os) const;

   public:
    FuncionarioVeterinario();
    FuncionarioVeterinario(
        int id, string nome,
        string cpf,
        tipoFunca classificacao,
        string celularProfissional,
        string email,
        bool isInscritoCRMV);
    ~FuncionarioVeterinario();


    bool getIsInscritoCRMV();
    void setIsInscritoCRMV(bool crmv);
};

#endif
