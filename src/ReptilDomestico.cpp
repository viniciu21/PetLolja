#include "ReptilDomestico.hpp"

#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;

ReptilDomestico::ReptilDomestico(
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
    string material_eliminidado,
    string nome_animal,
    string nome_dono) : Reptil(id,
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
                        AnimalDomestico(
                            nome_animal,
                            nome_dono){};

ReptilDomestico::~ReptilDomestico() {}

ostream &ReptilDomestico::imprimeDados(ostream &o) const {
    o << std::endl
      << "============== Reptil_Domestico ==============" << std::endl
      << "ID                    | " << this->id << std::endl
      << "Classe                | Reptil" << std::endl
      << "Nome                  | " << this->nome << std::endl
      << "Nome Cientifico       | " << this->especie << std::endl
      << "Sexo                  | " << (this->genero == F ? "Femea" : "Macho") << std::endl
      << "Temperatura           | " << this->tipo_temperatura << std::endl
      << "Pele                  | " << this->tipo_pele << std::endl
      << "Fecundacao            | " << this->tipo_fecundacao << std::endl
      << "Troca Pele            | " << (this->troca_pele == true ? "Sim" : "Não") << std::endl
      << "Material Eliminado    | " << this->material_eliminidado << std::endl
      << "Nome Batismo          | " << this->nome_animal << std::endl
      << "Nome Dono             | " << this->nome_dono << std::endl<< ".";

    return o;
}
