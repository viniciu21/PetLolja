#include "Reptil.hpp"

#include <iostream>

using std::string;

Reptil::Reptil(
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
    string material_eliminidado) : Animal(id,
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
                                          material_eliminidado){};

ostream &Reptil::imprimeDados(ostream &o) const {
    return o;
}

Reptil::~Reptil() {}
