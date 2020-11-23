#include <iomanip>
#include <iostream>
using std::cout;
using std::endl;
using std::setfill;
using std::setw;

#include "../include/AnfibioExotico.hpp"
#include "../include/AnimalExotico.hpp"

AnfibioExotico::AnfibioExotico(
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
    string aquatico_terrestre,
    bool registro_ibama,
    bool territorio_brasileiro,
    enExtincao extincao,
    string pais_origem) : Anfibio(id,
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
                          AnimalExotico(
                              aquatico_terrestre,
                              registro_ibama,
                              territorio_brasileiro,
                              extincao,
                              pais_origem) {}

AnfibioExotico::~AnfibioExotico() {}

// Getters

ostream& AnfibioExotico::imprimeDados(ostream& o) const {
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