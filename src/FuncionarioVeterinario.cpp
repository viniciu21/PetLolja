#include "../include/FuncionarioVeterinario.hpp"

FuncionarioVeterinario::FuncionarioVeterinario() {}

FuncionarioVeterinario::FuncionarioVeterinario(string nome,
                                               string cpf,
                                               tipoFunca classificacao,
                                               string celularProfissional,
                                               string email,
                                               bool isInscritoCRMV) : Funcionario(nome, cpf, classificacao, celularProfissional, email), isInscritoCRMV(isInscritoCRMV){};

std::ostream& FuncionarioVeterinario::imprimeDados(std::ostream& os) const {
    os << this->nome << "\n"
       << this->cpf << "\n"
       << this->classificacao << "\n"
       << this->celularProfissional << "\n"
       << this->email << "\n"
       << this->isInscritoCRMV << "\n";

    return os;
}
