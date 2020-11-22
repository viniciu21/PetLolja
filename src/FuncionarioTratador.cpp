#include "../include/FuncionarioTratador.hpp"

FuncionarioTratador::FuncionarioTratador(
    string nome,
    string cpf,
    tipoFunca classificacao,
    string celularProfissional,
    string email,
    nivelDeSeguranca classificacaoDeSeguranca) : Funcionario(nome, cpf, classificacao, celularProfissional, email), classificacaoDeSeguranca(classificacaoDeSeguranca) {}

std::ostream& FuncionarioTratador::imprimeDados(std::ostream& os) const {
    os << this->nome << "\n"
       << this->cpf << "\n"
       << this->classificacao << "\n"
       << this->celularProfissional << "\n"
       << this->email << "\n"
       << this->classificacaoDeSeguranca << "\n";

    return os;
}
