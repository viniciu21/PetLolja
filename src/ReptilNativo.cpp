#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;

#include "../include/ReptilNativo.hpp"

ReptilNativo::ReptilNativo(
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
    string aquatico_terrestre,
    bool registro_ibama,
    bool territorio_brasileiro,
    enExtincao extincao) : Reptil(id,
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
                           AnimalNativo(
                               aquatico_terrestre,
                               registro_ibama,
                               territorio_brasileiro,
                               extincao){};

ReptilNativo::~ReptilNativo() {}

ostream &ReptilNativo::imprimeDados(ostream &o) const {
    o << std::endl
      << "============== Reptil Nativo ============" << std::endl
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
      << "Aquatico ou Terrestre | " << this->aquatico_terrestre << std::endl
      << "Registro Ibama        | " << this->registro_ibama << std::endl
      << "Territorio Brasileiro | " << this->territorio_brasileiro << std::endl
      << "Ameacado de Extinsao  | " << (this->extincao == ameacado ? "Risco de extincao" : "Nao corre risco de extincao") << std::endl;

    return o;
}
