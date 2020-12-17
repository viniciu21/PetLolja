#include "FuncionarioTratador.hpp"

#include <iostream>

FuncionarioTratador::FuncionarioTratador() {
}

FuncionarioTratador::~FuncionarioTratador() {
  std::cout << "Funcionario removido" << std::endl;
}


nivelDeSeguranca FuncionarioTratador::getClassificacaoDeSeguranca(){
  return this->classificacaoDeSeguranca;
}
void FuncionarioTratador::setClassificacaoDeSeguranca(nivelDeSeguranca classi){
  this->classificacaoDeSeguranca = classi;
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
       << "============== Funcionario_Tratador ==============" << std::endl << "| "
       << "ID                     | " << this->id << std::endl << "| "
       << "Classe                 | Funcionario" << std::endl<< "| "
       << "Nome                   | " << this->nome << std::endl<< "| "
       << "Numero contato         | " << this->celularProfissional << std::endl<< "| "
       << "Funcao                 | " << "Tratador" << std::endl<< "| "
       << "Cpf                    | " << this->cpf << std::endl<< "| "
       << "Email                  | " << this->email << std::endl<< "| "
       << "Nivel seguranca        | " << (this->classificacaoDeSeguranca == Verde ? "Verde" : this->classificacaoDeSeguranca == Azul ? "Azul" : "Vermelho") << std::endl<<" .";

    return os;
}
