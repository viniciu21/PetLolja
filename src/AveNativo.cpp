#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

#include "../include/AveNativo.hpp"

AveNativo::AveNativo(
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
    string aquatico_terrestre,
    bool registro_ibama,
    bool territorio_brasileiro,
    enExtincao extincao) : Ave(id,
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
                           AnimalNativo(
                               aquatico_terrestre,
                               registro_ibama,
                               territorio_brasileiro,
                               extincao) {}

AveNativo::~AveNativo() {}

// Getters

ostream& AveNativo::imprimeDados(ostream& o) const {
    o << setfill(' ') << setw(10) << this->id
      << setfill(' ') << setw(10) << this->especie
      << setfill(' ') << setw(10) << this->nome
      << this->classe << "\n"
      << setfill(' ') << setw(10) << this->genero
      << setfill(' ') << setw(10) << this->tipo_temperatura
      << setfill(' ') << setw(10) << this->tipo_pele
      << setfill(' ') << setw(10) << this->material_eliminidado
      << setfill(' ') << setw(10) << this->aquatico_terrestre
      << setfill(' ') << setw(10) << this->registro_ibama
      << setfill(' ') << setw(10) << this->territorio_brasileiro
      << setfill(' ') << setw(10) << (this->extincao == ameacado ? "Risco de extincao" : "Nao corre risco de extincao")
      << setfill(' ') << setw(6);
    return o;
}
