#include "../include/FuncionarioVeterinario.hpp"

FuncionarioVeterinario::FuncionarioVeterinario() {}

FuncionarioVeterinario::FuncionarioVeterinario(
    int id, string nome,
    string cpf,
    tipoFunca classificacao,
    string celularProfissional,
    string email,
    bool isInscritoCRMV) : Funcionario(id, nome, cpf, classificacao, celularProfissional, email), isInscritoCRMV(isInscritoCRMV){};

std::ostream& FuncionarioVeterinario::imprimeDados(std::ostream& os) const {
    os << std::endl
       << "============== Funcioanrio Veterinario ============" << std::endl
       << "ID                    | " << this->id << std::endl
       << "Classe                | Funcionario" << std::endl
       << "Nome                  | " << this->nome << std::endl
       << "Numero para contato   | " << this->celularProfissional << std::endl
       << "Funcao                | " << "Veterinario" << std::endl
       << "Cpf                   | " << this->cpf << std::endl
       << "Email                 | " << this->email << std::endl
       << "Inscricao no CRMV     | " << (this->isInscritoCRMV ? "Inscrito" : "Nao inscrito") << std::endl;
    return os;
}
