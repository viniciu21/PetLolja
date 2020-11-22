#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;

#include "../include/AnfibioDomestico.hpp"

AnfibioDomestico::AnfibioDomestico(
    int id,
    string especie,
    string nome,
    string genero,
    familia classe,
    string veterinario,
    string tratador,
    string tipo_temperatura,
    string tipo_pele,
    string tipo_fecundacao,
    bool troca_pele,
    string material_eliminidado,
    string habitat,
    bool possui_ovos,
    string nome_animal,
    string nome_dono) : Anfibio(
                                id,
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
                                habitat,
                                possui_ovos),
                          AnimalDomestico(
                                nome_animal,
                                nome_dono) {}

AnfibioDomestico::~AnfibioDomestico() {}

// Getters

ostream& AnfibioDomestico::imprimeDados(ostream& o) const {
    o << setfill(' ') << setw(10) << this->id
      << setfill(' ') << setw(10) << this->especie
      << setfill(' ') << setw(10) << this->nome
      << this->classe << "\n"
      << setfill(' ') << setw(10) << this->genero
      << setfill(' ') << setw(10) << this->veterinario
      << setfill(' ') << setw(10) << this->tratador
      << setfill(' ') << setw(10) << this->tipo_temperatura
      << setfill(' ') << setw(10) << this->tipo_pele
      << setfill(' ') << setw(10) << this->material_eliminidado
      << setfill(' ') << setw(10) << this->nome_animal
      << setfill(' ') << setw(10) << this->nome_dono
      << setfill(' ') << setw(6);
    return o;
}
