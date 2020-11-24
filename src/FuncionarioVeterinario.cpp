#include "../include/FuncionarioVeterinario.hpp"

FuncionarioVeterinario::FuncionarioVeterinario() {}

FuncionarioVeterinario::FuncionarioVeterinario(string nome,
                                               string cpf,
                                               tipoFunca classificacao,
                                               string celularProfissional,
                                               string email,
                                               bool isInscritoCRMV) : Funcionario(nome, cpf, classificacao, celularProfissional, email), isInscritoCRMV(isInscritoCRMV){};

std::ostream& FuncionarioVeterinario::imprimeDados(std::ostream& os) const {
    os << std::endl
       << "============== Funcioanrio Tratador ============" << std::endl
       // << "ID                    | " << this->id << std::endl
       << "Classe                | Funcionario" << std::endl
       << "Nome                  | " << this->nome << std::endl
       << "Numero para contato   | " << this->celularProfissional << std::endl
       << "Função                | "
       << "Tratador" << std::endl
       << "Cpf                   | " << this->cpf << std::endl
       << "Email                 | " << this->email << std::endl
       << "Inscrição no CRMV     | " << (this->isInscritoCRMV ? "Inscrito" : "Não inscrito") << std::endl;
    return os;
}
