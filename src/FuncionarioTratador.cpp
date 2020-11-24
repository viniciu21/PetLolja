#include "../include/FuncionarioTratador.hpp"

FuncionarioTratador::FuncionarioTratador() {}

FuncionarioTratador::FuncionarioTratador(
    string nome,
    string cpf,
    tipoFunca classificacao,
    string celularProfissional,
    string email,
    nivelDeSeguranca classificacaoDeSeguranca) : Funcionario(nome, cpf, classificacao, celularProfissional, email), classificacaoDeSeguranca(classificacaoDeSeguranca) {}

std::ostream& FuncionarioTratador::imprimeDados(std::ostream& os) const {
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
       << "Nivel de segurança    | " << (this->classificacaoDeSeguranca == Verde ? "Verd" : this->classificacaoDeSeguranca == Azul ? "Azul" : "Vermelho") << std::endl;

    return os;
}
