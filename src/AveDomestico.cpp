#include "../include/AveDomestico.hpp"

#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

AveDomestico::AveDomestico(
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
    string envergaduraAsas,
    string nome_animal,
    string nome_dono) : Ave(id,
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
                            material_eliminidado,
                            tamanhoDoBico,
                            envergaduraAsas),
                        AnimalDomestico(
                            nome_animal,
                            nome_dono) {}

AveDomestico::~AveDomestico() {
    std::cout << "ave morrendo";
}

ostream& AveDomestico::imprimeDados(ostream& o) const {
    o << setfill(' ') << setw(10) << this->id
      << setfill(' ') << setw(10) << this->especie
      << setfill(' ') << setw(10) << this->nome
      << this->classe << "\n"
      << setfill(' ') << setw(10) << this->genero
      << setfill(' ') << setw(10) << this->tipo_temperatura
      << setfill(' ') << setw(10) << this->tipo_pele
      << setfill(' ') << setw(10) << this->material_eliminidado
      << setfill(' ') << setw(10) << this->nome_dono
      << "\n";

    return o;
}
