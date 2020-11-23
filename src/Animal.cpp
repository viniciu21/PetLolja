#include "../include/Animal.hpp"

Animal::Animal(
    int id,
    string especie,
    string nome,
    t_genero genero,
    familia classe,
    Funcionario* veterinario,
    Funcionario* tratador,
    string tipo_temperatura,
    string tipo_pele,
    string tipo_fecundacao,
    bool troca_pele,
    string material_eliminidado) {
    this->id = id;
    this->especie = especie;
    this->genero = genero;
    this->classe = classe;
    this->veterinario = veterinario;
    this->tratador = tratador;
    this->tipo_temperatura = tipo_temperatura;
    this->tipo_pele = tipo_pele;
    this->tipo_fecundacao = tipo_fecundacao;
    this->troca_pele = troca_pele;
    this->material_eliminidado = material_eliminidado;
};

Animal::~Animal() {}

// Getters
int Animal::getId() {
    return this->id;
}

string Animal::getEspecie() {
    return this->especie;
}

string Animal::getNome() {
    return this->nome;
}

t_genero Animal::getGenero() {
    return this->genero;
}

Funcionario* Animal::getVeterinario() {
    return this->veterinario;
}

Funcionario* Animal::getTratador() {
    return this->tratador;
}

string Animal::getTipo_temperatura() {
    return this->tipo_temperatura;
}

string Animal::getTipo_pele() {
    return this->tipo_pele;
}

string Animal::getTipo_fecundacao() {
    return this->tipo_fecundacao;
}

bool Animal::getTroca_pele() {
    return this->troca_pele;
}

string Animal::getMaterial_eliminidado() {
    return this->material_eliminidado;
}

//sobrecarga operador o
std::ostream& operator<<(std::ostream& o, Animal& a) {
    return a.imprimeDados(o);
}
