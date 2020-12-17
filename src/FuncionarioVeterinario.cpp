#include "FuncionarioVeterinario.hpp"

FuncionarioVeterinario::FuncionarioVeterinario() {}

FuncionarioVeterinario::~FuncionarioVeterinario() {
  std::cout << "Funcionario removido" << std::endl;
}

bool FuncionarioVeterinario::getIsInscritoCRMV(){
  return this->isInscritoCRMV;
}

void FuncionarioVeterinario::setIsInscritoCRMV(bool crmv){
  this->isInscritoCRMV = crmv;
}

FuncionarioVeterinario::FuncionarioVeterinario(
    int id, string nome,
    string cpf,
    tipoFunca classificacao,
    string celularProfissional,
    string email,
    bool isInscritoCRMV) : Funcionario(id, nome, cpf, classificacao, celularProfissional, email), isInscritoCRMV(isInscritoCRMV){};

std::ostream& FuncionarioVeterinario::imprimeDados(std::ostream& os) const {
    os << std::endl
       << "============== Funcionario_Veterinario ==============" << std::endl << " " <<  "| "
       << "ID                     | " << this->id << std::endl<< "| "
       << "Classe                 | Funcionario" << std::endl<< "| "
       << "Nome                   | " << this->nome << std::endl<< "| "
       << "Numero contato         | " << this->celularProfissional << std::endl<< "| "
       << "Funcao                 | " << "Veterinario" << std::endl<< "| "
       << "Cpf                    | " << this->cpf << std::endl<< "| "
       << "Email                  | " << this->email << std::endl<< "| "
       << "Inscricao CRMV         | " << (this->isInscritoCRMV ? "Inscrito" : "Nao inscrito") << std::endl << " .";
    return os;
}
