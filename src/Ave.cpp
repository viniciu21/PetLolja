#include "../include/Ave.hpp"

#include <iostream>

using std::string;

Ave::Ave(
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
    string material_eliminidado,
    string tamanhoDoBico,
    string envergaduraAsas) : Animal(id,
                                     especie,
                                     nome,
                                     genero,
                                     classe,
                                     veterinario,
                                     tratador,
                                     tipo_temperatura,
                                     tipo_pele,
                                     tipo_fecundacao,
                                     troca_pele,
                                     material_eliminidado),
                              envergaduraAsas(envergaduraAsas),
                              tamanhoDoBico(tamanhoDoBico){};

string Ave::getEnvergaduraAsas() {
    return this->envergaduraAsas;
};

string Ave::getTamanhoDoBico() {
    return this->tamanhoDoBico;
};

ostream& Ave::imprimeDados(ostream& o) const {
    o << this->especie << "\n"
      << this->genero << "\n"
      << this->envergaduraAsas << "\n"
      << this->classe << "\n"
      << this->id << "\n"
      << this->material_eliminidado << "\n"
      << this->nome << "\n"
      << this->especie << "\n"
      << this->tamanhoDoBico << "\n";
    return o;
}

Ave::~Ave() {}
