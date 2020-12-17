#include "Animal.hpp"

Animal::Animal(
    int id,
    string especie,
    string nome,
    t_genero genero,
    familia classe,
    std::shared_ptr<Funcionario> veterinario,
    std::shared_ptr<Funcionario> tratador,
    string tipo_temperatura,
    string tipo_pele,
    string tipo_fecundacao,
    bool troca_pele,
    string material_eliminidado) {
    this->id = id;
    this->especie = especie;
    this->genero = genero;
    this->nome = nome;
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

std::shared_ptr<Funcionario> Animal::getVeterinario() {
    return this->veterinario;
}

std::shared_ptr<Funcionario> Animal::getTratador() {
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

familia Animal::getFamilia() {
    return this->classe;
}

void Animal::setEspecie(string especie) {
    this->especie = especie;
}
void Animal::setNome(string nome) {
    this->nome = nome;
}
void Animal::setTipo_temperatura(string tipo_temperatura) {
    this->tipo_temperatura = tipo_temperatura;
}
void Animal::setTipo_pele(string tipo_pele) {
    this->tipo_pele = tipo_pele;
}
void Animal::setTipo_fecundacao(string tipo_fecundacao) {
    this->tipo_fecundacao = tipo_fecundacao;
}
void Animal::setTroca_pele(bool troca_pele) {
    this->troca_pele = troca_pele;
}
void Animal::setMaterial_eliminidado(string material_eliminidado) {
    this->material_eliminidado = material_eliminidado;
}

//sobrecarga operador o
std::ostream& operator<<(std::ostream& o, Animal& a) {
    o << std::endl
      << "============== Cuidadores ============== "
      << "\n" << "| "
      << "Veterinario           | "
      << a.getVeterinario()->getNome() << std::endl << "| "
      << "Tratador              | "
      << a.getTratador()->getNome() << std::endl;

    return a.imprimeDados(o);
}
