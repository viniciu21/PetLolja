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
    t_genero genero,
    familia classe,
    Funcionario* veterinario,
    Funcionario* tratador,
    string tipo_temperatura,
    string tipo_pele,
    string tipo_fecundacao,
    bool troca_pele,
    string material_eliminidado,
    string habitat,
    bool possui_ovos,
    string nome_animal,
    string nome_dono) : Anfibio(id,
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
    o << std::endl
      << "============== Anfibio Domestico ============" << std::endl
      << "ID                    | " << this->id << std::endl
      << "Classe                | Anfibio" << std::endl
      << "Nome                  | " << this->nome << std::endl
      << "Nome Cientifico       | " << this->especie << std::endl
      << "Sexo                  | " << (this->genero==F ? "Femea" : "Macho") << std::endl 
      << "Material Eleiminado   | " << this->material_eliminidado << std::endl
      << "Dieta                 | " << this->habitat << std::endl
      << "Veterinario           | "
      << "" << std::endl
      << "Tratador              | "
      << "" << std::endl
      << "Nome de Batismo       | " << this->nome_animal << std::endl
      << "Habitat               | " << this->habitat << std::endl 
      << "Possui Ovos           | " << this->possui_ovos << std::endl
      << "Nome Dono             | " << this->nome_dono << std::endl;

    return o;
}
