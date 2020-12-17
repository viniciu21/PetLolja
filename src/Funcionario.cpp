#include "Funcionario.hpp"

#include <iostream>

Funcionario::Funcionario() {}

Funcionario::Funcionario(
    int id, string nome,
    string cpf,
    tipoFunca classificacao,
    string celularProfissional,
    string email) : id(id), nome(nome), cpf(cpf), classificacao(classificacao), celularProfissional(celularProfissional), email(email){};

Funcionario::~Funcionario() {}

int Funcionario::getId() {
    return this->id;
}
string Funcionario::getNome() {
    return this->nome;
}

string Funcionario::getCpf() {
    return this->cpf;
}

tipoFunca Funcionario::getClassicicacao() {
    return this->classificacao;
}

string Funcionario::getCelularProfissional() {
    return this->celularProfissional;
}

string Funcionario::getEmail() {
    return this->email;
}

void Funcionario::setNome(string nome) {
    this->nome = nome;
}

void Funcionario::setCpf(string cpf) {
    this->cpf = cpf;
}

void Funcionario::setClassificacao(tipoFunca classificacao) {
    this->classificacao = classificacao;
}

void Funcionario::setCelularProfissional(string novoCell) {
    this->celularProfissional = novoCell;
}

void Funcionario::setEmail(string email) {
    this->email = email;
}

std::ostream& operator<<(std::ostream& o, Funcionario& f) {
    return f.imprimeDados(o);
}
