#include "../include/MamiferoDomestico.hpp"

#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;

MamiferoDomestico::MamiferoDomestico(
    int id,
    string especie,
    string nome,
    t_genero genero,
    familia classe,
    Funcionario *veterinario,
    Funcionario *tratador,
    string tipo_temperatura,
    string tipo_pele,
    string tipo_fecundacao,
    bool troca_pele,
    string material_eliminidado,
    bool tem_dentes,
    pelos pelagem,
    TipoDeGestacao tipo_gestacao,
    TipoDeMamifero tipo_mamifero,
    string nome_animal,
    string nome_dono) : Mamifero(id,
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
                                 tem_dentes,
                                 pelagem,
                                 tipo_gestacao,
                                 tipo_mamifero),
                        AnimalDomestico(
                            nome_animal,
                            nome_dono) {}

MamiferoDomestico::~MamiferoDomestico() {}

ostream &MamiferoDomestico::imprimeDados(ostream &o) const
{
    o << std::endl
      << "============== Ave Domestico ============" << std::endl
      << "ID                    | " << this->id << std::endl
      << "Classe                | Ave" << std::endl
      << "Nome                  | " << this->nome << std::endl
      << "Nome Cientifico       | " << this->especie << std::endl
      << "Sexo                  | " << (this->genero == F ? "Femea" : "Macho") << std::endl
      << "Temperatura           | " << this->tipo_temperatura << std::endl
      << "Pele                  | " << this->tipo_pele << std::endl
      << "Fecundacao            | " << this->tipo_fecundacao << std::endl
      << "Troca de Pele         | " << this->troca_pele << std::endl
      << "Material Eliminado    | " << this->material_eliminidado << std::endl
      << "Veterinario           | "
      << "" << std::endl
      << "Tratador              | "
      << "" << std::endl
      << "Nome de Batismo       | " << this->nome_animal << std::endl
      << "Dentes                | " << this->tem_dentes << std::endl
      << "Pelagem               | " << this->pelagem << std::endl
      << "Tipo de gestacao      | " << this->tipo_gestacao << std::endl
      << "Tipo do mamifero      | " << this->tipo_mamifero << std::endl;

    return o;
}