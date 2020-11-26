#include "../include/FuncionarioTratador.hpp"

#include <iostream>

FuncionarioTratador::FuncionarioTratador() {
}

FuncionarioTratador::~FuncionarioTratador() {
  std::cout << "Funcionario removido" << std::endl;
}

FuncionarioTratador::FuncionarioTratador(
    int id,
    string nome,
    string cpf,
    tipoFunca classificacao,
    string celularProfissional,
    string email,
    nivelDeSeguranca classificacaoDeSeguranca) : Funcionario(id, nome, cpf, classificacao, celularProfissional, email), classificacaoDeSeguranca(classificacaoDeSeguranca) {}

std::ostream& FuncionarioTratador::imprimeDados(std::ostream& os) const {
    os << std::endl
       << "============== Funcioanrio Tratador ============" << std::endl
       << "ID                    | " << this->id << std::endl
       << "Classe                | Funcionario" << std::endl
       << "Nome                  | " << this->nome << std::endl
       << "Numero para contato   | " << this->celularProfissional << std::endl
       << "Funcao                | " << "Tratador" << std::endl
       << "Cpf                   | " << this->cpf << std::endl
       << "Email                 | " << this->email << std::endl
       << "Nivel de seguranca    | " << (this->classificacaoDeSeguranca == Verde ? "Verde" : this->classificacaoDeSeguranca == Azul ? "Azul" : "Vermelho") << std::endl;

    return os;
}
